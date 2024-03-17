#include "form.h"
#include "ui_form.h"


#include "mainwindow.h"
#include "settingform.h"
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &Form::on_Zerno_clicked);
    installEventFilter(this);
}

Form::~Form()
{
    delete ui;
}



void Form::on_Xzvit_clicked()
{
    hide();
    windowx.showMaximized();
}

void Form::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}


void Form::on_Zerno_clicked()
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
}void Form::on_Zzvit_clicked()
{
    hide();
    windowz.showMaximized();
}

