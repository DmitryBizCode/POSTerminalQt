#ifndef PIESFORM_H
#define PIESFORM_H

#include <QWidget>

namespace Ui {
class PiesForm;
}

class PiesForm : public QWidget
{
    Q_OBJECT

public:
    explicit PiesForm(QWidget *parent = nullptr);
    ~PiesForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::PiesForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // PIESFORM_H
