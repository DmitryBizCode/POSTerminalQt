#include "goodsform.h"
#include "Accounting.h"

#include "ui_goodsform.h"

#include "mainwindow.h"
#include "settingform.h"
GoodsForm::GoodsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GoodsForm)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &GoodsForm::on_Zerno_clicked);
    installEventFilter(this);
}

GoodsForm::~GoodsForm()
{
    delete ui;
}
void GoodsForm::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}


void GoodsForm::on_Zerno_clicked()
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

void GoodsForm::on_pushButton_clicked()
{
    acc.func1(ui->comboBox->currentText().toStdString(), ui->lineEdit->text().toInt());
}

