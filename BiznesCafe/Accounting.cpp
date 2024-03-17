//
// Created by User on 12.04.2023.
//

#include "Accounting.h"
#define AC Accounting


void AC::func(const std::string& product_name, int subtract_value)
{
    // Open the database file in JSON format
    std::ifstream ifs("data.json");
    if (!ifs.is_open()) {
        std::cerr << "Cannot open database file!" << std::endl;
        return;
    }

    // Read the JSON object from the file
    json root;
    ifs >> root;
    ifs.close();

    // Check if the product exists in the database
    if (root["Database"][0].find(product_name) == root["Database"][0].end()) {
        std::cerr << "Product not found in the database!" << std::endl;
        return;
    }

    // Subtract the specified quantity from the selected product field
    int product_quantity = root["Database"][0][product_name];
    root["Database"][0][product_name] = product_quantity - subtract_value;

    // Save the updated database to the same file
    std::ofstream ofs("data.json");
    if (!ofs.is_open()) {
        std::cerr << "Cannot open output file!" << std::endl;
        return;
    }
    ofs << root.dump(4);
    ofs.close();

    std::cout << "Subtracted " << subtract_value << " " << product_name << " from the database." << std::endl;
}
void AC::func1(const std::string& product_name, int subtract_value)
{
    // Open the database file in JSON format
    std::ifstream ifs("data.json");
    if (!ifs.is_open()) {
        std::cerr << "Cannot open database file!" << std::endl;
        return;
    }

    // Read the JSON object from the file
    json root;
    ifs >> root;
    ifs.close();

    // Check if the product exists in the database
    if (root["Database"][0].find(product_name) == root["Database"][0].end()) {
        std::cerr << "Product not found in the database!" << std::endl;
        return;
    }

    // Subtract the specified quantity from the selected product field
    int* product_quantity = new int(root["Database"][0][product_name]);
    *product_quantity += subtract_value;
    root["Database"][0][product_name] = *product_quantity;
    delete product_quantity;

    // Save the updated database to the same file
    std::ofstream ofs("data.json");
    if (!ofs.is_open()) {
        std::cerr << "Cannot open output file!" << std::endl;
        return;
    }
    ofs << root.dump(4);
    ofs.close();

    std::cout << "Plus " << subtract_value << " " << product_name << " from the database." << std::endl;
}

