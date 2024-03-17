//
// Created by User on 12.04.2023.
//

#ifndef KYRSOVA_WORK_ACCOUNTING_H
#define KYRSOVA_WORK_ACCOUNTING_H


#include <bits/stdc++.h>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

class Accounting {
public:
    void func(const std::string& product_name, int subtract_value);
    void func1(const std::string& product_name, int subtract_value);
};


#endif //KYRSOVA_WORK_ACCOUNTING_H
