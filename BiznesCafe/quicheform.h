#ifndef QUICHEFORM_H
#define QUICHEFORM_H

#include <QWidget>

namespace Ui {
class QuicheForm;
}

class QuicheForm : public QWidget
{
    Q_OBJECT

public:
    explicit QuicheForm(QWidget *parent = nullptr);
    ~QuicheForm();

private slots:
    void on_Buttpl_clicked();

    void on_Buttmin_clicked();

    void on_pushButton_clicked();

    void on_Zerno_clicked();

private:
    Ui::QuicheForm *ui;
    void func();
    void showEvent(QShowEvent *event);
};


#endif // QUICHEFORM_H
