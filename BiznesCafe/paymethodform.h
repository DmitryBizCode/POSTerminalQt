#ifndef PAYMETHODFORM_H
#define PAYMETHODFORM_H

#include <QWidget>
#include "settingform.h"
#include "checkform.h"

namespace Ui {
class PaymethodForm;
}

class PaymethodForm : public QWidget
{
    Q_OBJECT

public:
    explicit PaymethodForm(QWidget *parent = nullptr);
    ~PaymethodForm();
private slots:


    void on_Zerno_clicked();

    void on_Setting_clicked();
    void on_CardDebt_clicked();

    void on_Cash_clicked();

private:
    Ui::PaymethodForm *ui;
    SettingForm windows;
    CheckForm windowcheck;
    void Func12(int g);
};

#endif // PAYMETHODFORM_H
