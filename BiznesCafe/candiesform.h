#ifndef CANDIESFORM_H
#define CANDIESFORM_H

#include <QWidget>

namespace Ui {
class CandiesForm;
}

class CandiesForm : public QWidget
{
    Q_OBJECT

public:
    explicit CandiesForm(QWidget *parent = nullptr);
    ~CandiesForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::CandiesForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // CANDIESFORM_H
