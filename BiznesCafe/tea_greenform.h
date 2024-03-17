#ifndef TEA_GREENFORM_H
#define TEA_GREENFORM_H

#include <QWidget>

namespace Ui {
class Tea_greenForm;
}

class Tea_greenForm : public QWidget
{
    Q_OBJECT

public:
    explicit Tea_greenForm(QWidget *parent = nullptr);
    ~Tea_greenForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::Tea_greenForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // TEA_GREENFORM_H
