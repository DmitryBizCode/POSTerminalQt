#ifndef COCOAFORM_H
#define COCOAFORM_H

#include <QWidget>

namespace Ui {
class CocoaForm;
}

class CocoaForm : public QWidget
{
    Q_OBJECT

public:
    explicit CocoaForm(QWidget *parent = nullptr);
    ~CocoaForm();


private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::CocoaForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};
#endif // COCOAFORM_H
