//
// Created by User on 12.04.2023.
//

#ifndef KYRSOVA_WORK_OVERDUE_H
#define KYRSOVA_WORK_OVERDUE_H

#include <bits/stdc++.h>
#include "nlohmann/json.hpp"
#include "Accounting.h"


using json = nlohmann::json;
using namespace std;

class Overdue : virtual protected Accounting{
public:
    int InputInFile(string name,int quantity,string text);
};


#endif //KYRSOVA_WORK_OVERDUE_H
