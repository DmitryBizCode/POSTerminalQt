#ifndef MACAROONFORM_H
#define MACAROONFORM_H

#include <QWidget>

namespace Ui {
class MacaroonForm;
}

class MacaroonForm : public QWidget
{
    Q_OBJECT

public:
    explicit MacaroonForm(QWidget *parent = nullptr);
    ~MacaroonForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::MacaroonForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // MACAROONFORM_H
