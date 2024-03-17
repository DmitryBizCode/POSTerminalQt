#ifndef TEA_BLACKFORM_H
#define TEA_BLACKFORM_H

#include <QWidget>

namespace Ui {
class Tea_blackForm;
}

class Tea_blackForm : public QWidget
{
    Q_OBJECT

public:
    explicit Tea_blackForm(QWidget *parent = nullptr);
    ~Tea_blackForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::Tea_blackForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // TEA_BLACKFORM_H
