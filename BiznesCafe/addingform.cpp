#include "addingform.h"
#include "ui_addingform.h"
#include "Overdue.h"

#include "mainwindow.h"
#include "settingform.h"
AddingForm::AddingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddingForm)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &AddingForm::on_Zerno_clicked);
    installEventFilter(this);
}

AddingForm::~AddingForm()
{
    delete ui;
}
void AddingForm::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}


void AddingForm::on_Zerno_clicked()
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

void AddingForm::on_pushButton_clicked()
{
    ove.InputInFile(ui->comboBox->currentText().toStdString(), ui->lineEdit->text().toInt(),ui->lineEdit_2->text().toStdString());
}

