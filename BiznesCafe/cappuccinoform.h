#ifndef CAPPUCCINOFORM_H
#define CAPPUCCINOFORM_H

#include <QWidget>

#include <bits/stdc++.h>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
namespace Ui {
class CappuccinoForm;
}

class CappuccinoForm : public QWidget
{
    Q_OBJECT

public:
    explicit CappuccinoForm(QWidget *parent = nullptr);
    ~CappuccinoForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::CappuccinoForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};
#endif // CAPPUCCINOFORM_H
