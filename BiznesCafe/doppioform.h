#ifndef DOPPIOFORM_H
#define DOPPIOFORM_H

#include <QWidget>

namespace Ui {
class DoppioForm;
}

class DoppioForm : public QWidget
{
    Q_OBJECT

public:
    explicit DoppioForm(QWidget *parent = nullptr);
    ~DoppioForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::DoppioForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};
#endif // DOPPIOFORM_H
