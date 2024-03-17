#ifndef GOODSFORM_H
#define GOODSFORM_H

#include <QWidget>
#include "settingform.h"
#include "Accounting.h"

namespace Ui {
class GoodsForm;
}

class GoodsForm : public QWidget
{
    Q_OBJECT

public:
    explicit GoodsForm(QWidget *parent = nullptr);
    ~GoodsForm();
private slots:


    void on_Zerno_clicked();

    void on_Setting_clicked();

    void on_pushButton_clicked();

private:
    Ui::GoodsForm *ui;
    SettingForm windows;
    Accounting acc;
};

#endif // GOODSFORM_H
