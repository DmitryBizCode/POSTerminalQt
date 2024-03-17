#include "datafromjsonform.h"
#include "ui_datafromjsonform.h"

#include "mainwindow.h"
#include "settingform.h"
DataFromJsonForm::DataFromJsonForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataFromJsonForm)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &DataFromJsonForm::on_Zerno_clicked);
    installEventFilter(this);
}
void DataFromJsonForm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    func1(); // Call func() when the widget is shown
}
DataFromJsonForm::~DataFromJsonForm()
{
    delete ui;
}
void DataFromJsonForm::func1(){
    string filename = "data.json";
    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Unable to open file " << filename << endl;
        return;
    }
    json root;
    file >> root;
    file.close();

    // Print current prices
        int product_quantity = root["Database"][0][ui->l1->text().toStdString()];
        ui->u1->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l2->text().toStdString()];
        ui->u2->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l3->text().toStdString()];
        ui->u3->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l4->text().toStdString()];
        ui->u4->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l5->text().toStdString()];
        ui->u5->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l6->text().toStdString()];
        ui->u6->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l7->text().toStdString()];
        ui->u7->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l8->text().toStdString()];
        ui->u8->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l9->text().toStdString()];
        ui->u9->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l10->text().toStdString()];
        ui->u10->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l11->text().toStdString()];
        ui->u11->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l12->text().toStdString()];
        ui->u12->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l13->text().toStdString()];
        ui->u13->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l14->text().toStdString()];
        ui->u14->setText(QString::number(product_quantity));
        product_quantity = root["Database"][0][ui->l15->text().toStdString()];
        ui->u15->setText(QString::number(product_quantity));
       }
void DataFromJsonForm::on_Zerno_clicked()
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
void DataFromJsonForm::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}


