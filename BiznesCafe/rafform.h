#ifndef RAFFORM_H
#define RAFFORM_H

#include <QWidget>

namespace Ui {
class RafForm;
}

class RafForm : public QWidget
{
    Q_OBJECT

public:
    explicit RafForm(QWidget *parent = nullptr);
    ~RafForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::RafForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // RAFFORM_H
