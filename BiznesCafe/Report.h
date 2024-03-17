//
// Created by User on 12.04.2023.
//

#ifndef KYRSOVA_WORK_REPORT_H
#define KYRSOVA_WORK_REPORT_H
#include <bits/stdc++.h>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

class Report {
protected:
    void Z_zvitEdit(float g);
    void X_zvitEdit(float g);
public:
    float X_zvitz();
    float X_zvitx();
    float Z_zvit();
};


#endif //KYRSOVA_WORK_REPORT_H
