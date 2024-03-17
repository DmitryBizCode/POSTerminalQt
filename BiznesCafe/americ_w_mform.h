#ifndef AMERIC_W_MFORM_H
#define AMERIC_W_MFORM_H

#include <QWidget>

namespace Ui {
class Americ_w_mForm;
}

class Americ_w_mForm : public QWidget
{
    Q_OBJECT

public:
    explicit Americ_w_mForm(QWidget *parent = nullptr);
    ~Americ_w_mForm();


private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::Americ_w_mForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};
#endif // AMERIC_W_MFORM_H
