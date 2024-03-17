#ifndef XZVITFORM_H
#define XZVITFORM_H

#include <QWidget>
#include "Report.h"
#include "settingform.h"
namespace Ui {
class XzvitForm;
}

class XzvitForm : public QWidget
{
    Q_OBJECT

public:
    explicit XzvitForm(QWidget *parent = nullptr);
    ~XzvitForm();

private slots:


    void on_Zerno_clicked();

    void on_Setting_clicked();


private:
    Ui::XzvitForm *ui;
    Report r;
    SettingForm windows;
    void updatePrice();
    void showEvent(QShowEvent *event);
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // XZVITFORM_H
