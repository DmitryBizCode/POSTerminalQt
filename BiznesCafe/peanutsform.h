#ifndef PEANUTSFORM_H
#define PEANUTSFORM_H

#include <QWidget>

namespace Ui {
class PeanutsForm;
}

class PeanutsForm : public QWidget
{
    Q_OBJECT

public:
    explicit PeanutsForm(QWidget *parent = nullptr);
    ~PeanutsForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::PeanutsForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};

#endif // PEANUTSFORM_H
