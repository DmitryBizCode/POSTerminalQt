#ifndef PROFITEROLESFORM_H
#define PROFITEROLESFORM_H

#include <QWidget>

namespace Ui {
class ProfiterolesForm;
}

class ProfiterolesForm : public QWidget
{
    Q_OBJECT

public:
    explicit ProfiterolesForm(QWidget *parent = nullptr);
    ~ProfiterolesForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::ProfiterolesForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // PROFITEROLESFORM_H
