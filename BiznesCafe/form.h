#ifndef FORM_H
#define FORM_H
#include "zzvitform.h"
#include "xzvitform.h"
#include <QWidget>
#include "settingform.h"
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
private slots:


    void on_Zerno_clicked();

    void on_Setting_clicked();

    void on_Xzvit_clicked();

    void on_Zzvit_clicked();

private:
    Ui::Form *ui;
    ZzvitForm windowz;
    XzvitForm windowx;
    SettingForm windows;
};

#endif // FORM_H
