//
// Created by User on 12.04.2023.
//

#include "Overdue.h"
#define OV Overdue

int OV::InputInFile(string name, int quantity, string text)
{
    string strfile = "Documentation.txt";
    ofstream filik;

    filik.open(strfile, ofstream::app);
    if (!filik.is_open())
    {
        cout << "Error opening file" << endl;
        return -1;
    }

    ifstream file("data.json");
    json data;
    file >> data;

    // Dynamic memory allocation for the Accounting objects
    Accounting* accountingObjects = new Accounting[quantity];

    bool found = false;
    for (const auto& product : data["drinks"])
        if (product["name"] == name)
        {
            for (int i = 0; i < quantity; i++)
            {
                const auto& productDetails = product["product"];
                for (const auto& [name, Value] : productDetails.items())
                    accountingObjects[i].func(name, Value);
            }
            found = true;
            break;
        }
    if (!found)
        for (const auto& product : data["food"])
            if (product["name"] == name)
            {
                for (int i = 0; i < quantity; i++)
                {
                    const auto& productDetails = product["product"];
                    for (const auto& [name, Value] : productDetails.items())
                        accountingObjects[i].func(name, Value);
                }
                found = true;
                break;
            }
    if (!found)
        cout << "Invalid product name" << endl;

    // Output the removal of goods to the file
    filik << endl << endl << endl;
    filik << "******************************removal of goods from the warehouse******************************" << endl;
    filik << "                               /Product/                 /Value/" << endl;
    filik << "                              " << name << "              " << quantity << endl;
    filik << "                                   /documentation and reason/" << endl;
    filik << text << endl;
    filik << "***********************************************************************************************" << endl;

    filik.close();

    // Clean up dynamically allocated memory
    delete[] accountingObjects;

    return 0;
}
