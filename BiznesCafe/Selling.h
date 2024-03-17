//
// Created by User on 12.04.2023.
//

#ifndef KYRSOVA_WORK_SELLING_H
#define KYRSOVA_WORK_SELLING_H


#include <bits/stdc++.h>
#include "nlohmann/json.hpp"
#include "Accounting.h"
#include "Report.h"

using json = nlohmann::json;
using namespace std;

class Selling : virtual protected Accounting, public Report{
protected:
    void processProduct(const json& product, const int quantity);
    float Discount(int g);
public:
    void Payment_method(int g,float q);
    float Product_selection_pay(int g , int r);
};

#endif //KYRSOVA_WORK_SELLING_H
