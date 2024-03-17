#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "form.h"
#include <QPixmap>
#include "sellform.h"

#include "settingform.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Msell_clicked()
{
    hide();
    window2.showMaximized();
}

void MainWindow::on_Macc_clicked()
{
    hide();
    window1.showMaximized();
}
void MainWindow::on_Mrep_clicked()
{
    hide();
    window3.showMaximized();
}
void MainWindow::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}

