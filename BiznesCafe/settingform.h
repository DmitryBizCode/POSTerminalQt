#ifndef SETTINGFORM_H
#define SETTINGFORM_H

#include <QWidget>

#include <bits/stdc++.h>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;
namespace Ui {
class SettingForm;
}

class SettingForm : public QWidget
{
    Q_OBJECT

public:
    explicit SettingForm(QWidget *parent = nullptr);
    ~SettingForm();

private slots:
    void on_p1_clicked();
    void on_p2_clicked();
    void on_p3_clicked();
    void on_p4_clicked();
    void on_p5_clicked();
    void on_p6_clicked();
    void on_p7_clicked();
    void on_p8_clicked();
    void on_p9_clicked();
    void on_p10_clicked();
    void on_p11_clicked();
    void on_p12_clicked();
    void on_p13_clicked();
    void on_p14_clicked();
    void on_p15_clicked();
    void on_p16_clicked();
    void on_p17_clicked();
    void on_p18_clicked();
    void on_p19_clicked();
    void on_p20_clicked();

    void on_Zerno_clicked();

private:
    Ui::SettingForm *ui;
    void func1();
    void showEvent(QShowEvent *event);
};

#endif // SETTINGFORM_H
