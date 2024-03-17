#include "menuaccform.h"
#include "ui_menuaccform.h"
#include "mainwindow.h"
#include "settingform.h"
#include "goodsform.h"
#include "addingform.h"

MenuACCForm::MenuACCForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuACCForm)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &MenuACCForm::on_Zerno_clicked);
    installEventFilter(this);
}

MenuACCForm::~MenuACCForm()
{
    delete ui;
}
void MenuACCForm::on_Zerno_clicked()
{
    // Check if a MainWindow instance already exists
    QList<QWidget*> topLevelWidgets = QApplication::topLevelWidgets();
    for (QWidget* widget : topLevelWidgets)
    {
        MainWindow* mainWindow = qobject_cast<MainWindow*>(widget);
        if (mainWindow)
        {
            // MainWindow instance already exists, bring it to front and close this window
            mainWindow->showMaximized();
            this->close();
            return;
        }
    }
    // If no MainWindow instance exists, create a new one
    MainWindow* mainWindow = new MainWindow();
    mainWindow->showMaximized();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}

void MenuACCForm::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}




void MenuACCForm::on_Datab_clicked()
{
    hide();
    windowD.showMaximized();
}


void MenuACCForm::on_goods_clicked()
{
    hide();
    windowG.showMaximized();
}


void MenuACCForm::on_adding_clicked()
{
    hide();
    windowA.showMaximized();
}

