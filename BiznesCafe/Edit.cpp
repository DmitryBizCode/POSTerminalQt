//
// Created by User on 12.04.2023.
//

#include "Edit.h"
#define ED Edit
void ED::func()
{
    string filename = "data.json";
    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Unable to open file " << filename << endl;
        return;
    }
    json root;
    file >> root;
    file.close();

    // Print current prices
    cout << "Current prices:" << endl;
    for (const auto& item : root["drinks"])
    {
        cout << item["name"] << " (drink): " << item["price"] << endl;
    }
    for (const auto& item : root["food"])
    {
        cout << item["name"] << " (food): " << item["price"] << endl;
    }

    // Prompt user for item to update and new price
    string item_name;
    int new_price;
    cout << "Enter item name: ";
    getline(cin, item_name);
    cout << "Enter new price: ";
    cin >> new_price;

    // Update price
    bool updated = false;
    for (auto& item : root["drinks"])
    {
        if (item["name"] == item_name)
        {
            item["price"] = new_price;
            updated = true;
            break;
        }
    }
    if (!updated)
    {
        for (auto& item : root["food"])
        {
            if (item["name"] == item_name)
            {
                item["price"] = new_price;
                updated = true;
                break;
            }
        }
    }
    // Write updated data to file
    ofstream bum(filename);
    bum << root.dump(4);
    bum.close();

    if (updated)
    {
        cout << "Price updated!" << endl;
    }
    else
    {
        cout << "Item not found!" << endl;
    }
}