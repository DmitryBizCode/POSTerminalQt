#ifndef LATTEFORM_H
#define LATTEFORM_H

#include <QWidget>

namespace Ui {
class LatteForm;
}

class LatteForm : public QWidget
{
    Q_OBJECT

public:
    explicit LatteForm(QWidget *parent = nullptr);
    ~LatteForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::LatteForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // LATTEFORM_H
