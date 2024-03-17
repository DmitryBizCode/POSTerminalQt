#include "paymethodform.h"
#include "ui_paymethodform.h"
#include "checkform.h"

#include "mainwindow.h"
#include "settingform.h"
PaymethodForm::PaymethodForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaymethodForm)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &PaymethodForm::on_Zerno_clicked);
    installEventFilter(this);
}

PaymethodForm::~PaymethodForm()
{
    delete ui;
}
void PaymethodForm::Func12(int g){
    std::ifstream file("TTL.json");
    if (!file.is_open())
    {
        std::cout << "Помилка відкриття файлу!" << std::endl;
        return;
    }

    json dataw;
    file >> dataw;

    dataw["way"][0]["Pay"] = g;
    int dis = ui->lineEdit->text().toInt();
    dataw["way"][0]["Discount"] = dis;
    std::ofstream outputFile("TTL.json");
    outputFile << dataw.dump(4);

    // Закриття файлів
    file.close();
    outputFile.close();
}
void PaymethodForm::on_Zerno_clicked()
{
    // Check if a MainWindow instance already exists
    QList<QWidget*> topLevelWidgets = QApplication::topLevelWidgets();
    for (QWidget* widget : topLevelWidgets)
    {
        SellForm* mainWindow = qobject_cast<SellForm*>(widget);
        if (mainWindow)
        {
            // MainWindow instance already exists, bring it to front and close this window
            mainWindow->showMaximized();
            this->close();
            return;
        }
    }
    // If no MainWindow instance exists, create a new one
    SellForm* mainWindow = new SellForm();
    mainWindow->showMaximized();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}

void PaymethodForm::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}

void PaymethodForm::on_CardDebt_clicked()
{
    Func12(2);
    hide();
    windowcheck.showMaximized();
}

void PaymethodForm::on_Cash_clicked()
{
    Func12(1);
    hide();
    windowcheck.showMaximized();
}

