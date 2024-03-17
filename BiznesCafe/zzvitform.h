#ifndef ZZVITFORM_H
#define ZZVITFORM_H

#include <QWidget>
#include "Report.h"
#include "settingform.h"
namespace Ui {
class ZzvitForm;
}

class ZzvitForm : public QWidget
{
    Q_OBJECT

public:
    explicit ZzvitForm(QWidget *parent = nullptr);
    ~ZzvitForm();
private slots:


    void on_Zerno_clicked();

    void on_Setting_clicked();

private:
    Ui::ZzvitForm *ui;
    Report r;
    SettingForm windows;
    void updatePrice();
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // ZZVITFORM_H
