//
// Created by User on 12.04.2023.
//
#include <bits/stdc++.h>

#include "Selling.h"
#define SE Selling

float SE::Discount(int g)
{
    // Discount
    float t = 1;
    if(!(g == 0))
        t = 1.0 - (g / 100.0);
    return t;
}

void SE::Payment_method(int g, float q)
{
    if (g == 1)
    {
        Report::X_zvitEdit(q);
        Report::Z_zvitEdit(q);
    }
    else
    {
        Report::Z_zvitEdit(q);
    }
}

void SE::processProduct(const json& product, const int quantity)
{
    // Dynamic memory allocation for the Accounting objects
    Accounting* accountingObjects = new Accounting[quantity];

    for (int i = 0; i < quantity; i++)
    {
        const auto& productDetails = product["product"];
        for (const auto& [name, Value] : productDetails.items())
            accountingObjects[i].func(name, Value);
    }

    // Clean up dynamically allocated memory
    delete[] accountingObjects;
}

float SE::Product_selection_pay(int g , int r) {
    std::ifstream file("data.json");
    json data;
    file >> data;

    std::map<std::string, int> inventory;
    std::ifstream file2("TTL.json");
    json TTL;
    file2 >> TTL;
    // Ввід кількості товарів для кожної позиції
    for (const auto& product : TTL["product"]) {
        std::cout << "Назва: " << product["name"] << ", Кількість: " << product["count"] << std::endl;
        string str = product["name"];
        int quantity = product["count"];
        while (true) {
            bool found = false;
            for (const auto& product : data["drinks"])
                if (product["name"] == str)
                {
                    processProduct(product, quantity);
                    inventory[str] += quantity;
                    found = true;
                    break;
                }
            if (!found)
                for (const auto& product : data["food"])
                    if (product["name"] == str)
                    {
                        processProduct(product, quantity);
                        inventory[str] += quantity;
                        found = true;
                        break;
                    }
            if (!found)
                std::cout << "Invalid product name" << std::endl;
            break;
        }
    }

    //
    if (g == 1) {
        // Обчислення загальної вартості товарів зі знижкою
        for (const auto& product : TTL["product"]) {
            std::cout << "Назва: " << product["name"] << ", Кількість: " << product["count"] << std::endl;
            string str = product["name"];
            int quantity = product["count"];
            double total_cost = 0.0;
            for (const auto &[str, quantity]: inventory) {
                auto it = std::find_if(data["drinks"].begin(), data["drinks"].end(),
                                       [&str](const auto &item) { return item["name"] == str; });
                if (it != data["drinks"].end()) {
                    double price = it->at("price");
                    double cost = quantity * price * Discount(r);
                    total_cost += cost;
                } else {
                    it = std::find_if(data["food"].begin(), data["food"].end(),
                                      [&str](const auto &item) { return item["name"] == str; });
                    if (it != data["food"].end()) {
                        double price = it->at("price");
                        double cost = quantity * price * Discount(r);
                        total_cost += cost;
                    }
                }
            }
            Payment_method(1, total_cost);
            std::cout << "Total cost of inventory with Discount: " << total_cost << std::endl;
            return total_cost;
        }
    }
    else if (g == 2){
        for (const auto& product : TTL["product"]) {
            std::cout << "Назва: " << product["name"] << ", Кількість: " << product["count"] << std::endl;
            string str = product["name"];
            int quantity = product["count"];
        // Обчислення загальної вартості товарів
        double total_cost = 0.0;
        for (const auto& [str, quantity] : inventory)
        {
            auto it = find_if(data["drinks"].begin(), data["drinks"].end(),
                              [&str](const auto& item) { return item["name"] == str; });
            if (it != data["drinks"].end())
            {
                double price = it->at("price");
                double cost = quantity * price* Discount(r);
                total_cost += cost;
            }
            it = find_if(data["food"].begin(), data["food"].end(),
                         [&str](const auto& item) { return item["name"] == str; });
            if (it != data["food"].end())
            {
                double price = it->at("price");
                double cost = quantity * price* Discount(r);
                total_cost += cost;
            }
        }
        Payment_method( 2, total_cost);
        std::cout << "Total cost of inventory: " << total_cost << std::endl;
        return total_cost;
    }}
    else
    {
        cout<<"Error 404";
        return 0;
    }
}

