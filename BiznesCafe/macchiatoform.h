#ifndef MACCHIATOFORM_H
#define MACCHIATOFORM_H

#include <QWidget>

#include <bits/stdc++.h>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
namespace Ui {
class MacchiatoForm;
}

class MacchiatoForm : public QWidget
{
    Q_OBJECT

public:
    explicit MacchiatoForm(QWidget *parent = nullptr);
    ~MacchiatoForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::MacchiatoForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // MACCHIATOFORM_H
