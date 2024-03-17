#ifndef DATAFROMJSONFORM_H
#define DATAFROMJSONFORM_H

#include <QWidget>
#include "settingform.h"

namespace Ui {
class DataFromJsonForm;
}

class DataFromJsonForm : public QWidget
{
    Q_OBJECT

public:
    explicit DataFromJsonForm(QWidget *parent = nullptr);
    ~DataFromJsonForm();
private slots:


    void on_Zerno_clicked();

    void on_Setting_clicked();
private:
    Ui::DataFromJsonForm *ui;
    void func1();
    SettingForm windows;
    void showEvent(QShowEvent *event);
};

#endif // DATAFROMJSONFORM_H
