#ifndef MENUACCFORM_H
#define MENUACCFORM_H

#include <QWidget>
#include "datafromjsonform.h"
#include "settingform.h"
#include "goodsform.h"
#include "addingform.h"

namespace Ui {
class MenuACCForm;
}

class MenuACCForm : public QWidget
{
    Q_OBJECT

public:
    explicit MenuACCForm(QWidget *parent = nullptr);
    ~MenuACCForm();
private slots:


    void on_Zerno_clicked();

    void on_Setting_clicked();

    void on_Datab_clicked();

    void on_goods_clicked();

    void on_adding_clicked();

private:
    Ui::MenuACCForm *ui;
    SettingForm windows;
    DataFromJsonForm windowD;
    GoodsForm windowG;
    AddingForm windowA;
};

#endif // MENUACCFORM_H
