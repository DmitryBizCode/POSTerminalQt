#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "form.h"
#include "menuaccform.h"
#include "sellform.h"
#include "settingform.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Msell_clicked();
    void on_Setting_clicked();
    void on_Macc_clicked();

    void on_Mrep_clicked();

private:
    Ui::MainWindow *ui;
    SettingForm windows;
    Form window1;
    MenuACCForm window3;
    SellForm window2;
};
#endif // MAINWINDOW_H

