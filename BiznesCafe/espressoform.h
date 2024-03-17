#ifndef ESPRESSOFORM_H
#define ESPRESSOFORM_H

#include <QWidget>

namespace Ui {
class EspressoForm;
}

class EspressoForm : public QWidget
{
    Q_OBJECT

public:
    explicit EspressoForm(QWidget *parent = nullptr);
    ~EspressoForm();
private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::EspressoForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // ESPRESSOFORM_H
