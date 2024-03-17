#ifndef CHECKFORM_H
#define CHECKFORM_H

#include <QWidget>

#include <bits/stdc++.h>
#include "nlohmann/json.hpp"
#include "Selling.h"

using namespace std ;
using json = nlohmann::json;
namespace Ui {
class CheckForm;
}

class CheckForm : public QWidget, public Selling
{
    Q_OBJECT

public:
    explicit CheckForm(QWidget *parent = nullptr);
    ~CheckForm();

private slots:
    void on_Zerno_clicked();

private:
    Ui::CheckForm *ui;
    void functodo();
    void showEvent(QShowEvent *event);
    string generateReceiptText();
};

#endif // CHECKFORM_H
