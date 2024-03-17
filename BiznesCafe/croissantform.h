#ifndef CROISSANTFORM_H
#define CROISSANTFORM_H

#include <QWidget>

namespace Ui {
class CroissantForm;
}

class CroissantForm : public QWidget
{
    Q_OBJECT

public:
    explicit CroissantForm(QWidget *parent = nullptr);
    ~CroissantForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::CroissantForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};
#endif // CROISSANTFORM_H
