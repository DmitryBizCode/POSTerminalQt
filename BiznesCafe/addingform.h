#ifndef ADDINGFORM_H
#define ADDINGFORM_H

#include <QWidget>
#include "settingform.h"
#include "Overdue.h"

namespace Ui {
class AddingForm;
}

class AddingForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddingForm(QWidget *parent = nullptr);
    ~AddingForm();
private slots:


    void on_Zerno_clicked();

    void on_Setting_clicked();
    void on_pushButton_clicked();

private:
    Ui::AddingForm *ui;
    SettingForm windows;
    Overdue ove;
};

#endif // ADDINGFORM_H
