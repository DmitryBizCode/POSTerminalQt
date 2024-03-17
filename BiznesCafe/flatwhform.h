#ifndef FLATWHFORM_H
#define FLATWHFORM_H

#include <QWidget>

namespace Ui {
class FlatWhForm;
}

class FlatWhForm : public QWidget
{
    Q_OBJECT

public:
    explicit FlatWhForm(QWidget *parent = nullptr);
    ~FlatWhForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::FlatWhForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};
#endif // FLATWHFORM_H
