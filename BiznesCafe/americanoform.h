#ifndef AMERICANOFORM_H
#define AMERICANOFORM_H

#include <QWidget>

namespace Ui {
class AmericanoForm;
}

class AmericanoForm : public QWidget
{
    Q_OBJECT

public:
    explicit AmericanoForm(QWidget *parent = nullptr);
    ~AmericanoForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::AmericanoForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // AMERICANOFORM_H
