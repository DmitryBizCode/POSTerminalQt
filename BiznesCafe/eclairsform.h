#ifndef ECLAIRSFORM_H
#define ECLAIRSFORM_H

#include <QWidget>

namespace Ui {
class EclairsForm;
}

class EclairsForm : public QWidget
{
    Q_OBJECT

public:
    explicit EclairsForm(QWidget *parent = nullptr);
    ~EclairsForm();
private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::EclairsForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // ECLAIRSFORM_H
