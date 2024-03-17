//
// Created by User on 12.04.2023.
//

#include "Report.h"
#define RE Report
void RE::X_zvitEdit(float g)
{
    // Open the file for reading
    std::ifstream i("data.json");
    json j;
    i >> j;
    i.close();

    // Get the value of "X-zvit" and add g to it
    float* x_zvit = new float(j["Zvit"][0]["X-zvit"]);
    *x_zvit += g;

    // Change the value of "X-zvit" in the JSON file
    j["Zvit"][0]["X-zvit"] = *x_zvit;

    // Open the file for writing
    std::ofstream o("data.json");
    o << std::setw(4) << j << std::endl;
    o.close();

    // Clean up dynamically allocated memory
    delete x_zvit;
}

void RE::Z_zvitEdit(float g)
{
    // Open the file for reading
    std::ifstream i("data.json");
    json j;
    i >> j;
    i.close();

    // Get the value of "Z-zvit" and add g to it
    float* z_zvit = new float(j["Zvit"][0]["Z-zvit"]);
    *z_zvit += g;

    // Change the value of "Z-zvit" in the JSON file
    j["Zvit"][0]["Z-zvit"] = *z_zvit;

    // Open the file for writing
    std::ofstream o("data.json");
    o << std::setw(4) << j << std::endl;
    o.close();

    // Clean up dynamically allocated memory
    delete z_zvit;
}

float RE::X_zvitx()
{
    // Open the file for reading
    std::ifstream file("data.json");
    json data;
    file >> data;
    file.close();

    // Get the value of "X-zvit"
    float* x_zvit = new float(data["Zvit"][0]["X-zvit"]);
    std::cout << "X-zvit: " << *x_zvit << std::endl;

    // Clean up dynamically allocated memory
    float result = *x_zvit;
    delete x_zvit;

    return result;
}

float RE::X_zvitz()
{
    // Open the file for reading
    std::ifstream file("data.json");
    json data;
    file >> data;
    file.close();

    // Get the value of "Z-zvit"
    float* z_zvit = new float(data["Zvit"][0]["Z-zvit"]);
    std::cout << "zvit from all day: " << *z_zvit << std::endl;

    // Clean up dynamically allocated memory
    float result = *z_zvit;
    delete z_zvit;

    return result;
}

float RE::Z_zvit()
{
    std::ifstream file("data.json");
    json data;
    file >> data;
    file.close();

    float* z_zvit_ptr = new float(data["Zvit"][0]["Z-zvit"]);
    float z_zvit = *z_zvit_ptr;
    std::cout << "Z-zvit: " << z_zvit << std::endl;

    // Змінюємо значення "Z-zvit" та "X-zvit" на 0
    data["Zvit"][0]["Z-zvit"] = 0;
    data["Zvit"][0]["X-zvit"] = 0;

    std::ofstream output_file("data.json");
    output_file << data.dump(4);
    output_file.close();

    delete z_zvit_ptr;
    return z_zvit;
}
