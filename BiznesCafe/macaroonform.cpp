#include "macaroonform.h"
#include "ui_macaroonform.h"

#include <bits/stdc++.h>
#include "nlohmann/json.hpp"
#include "sellform.h"
#include <QMessageBox>

using json = nlohmann::json;
using namespace std;
MacaroonForm::MacaroonForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MacaroonForm)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MacaroonForm::on_pushButton_clicked);
    installEventFilter(this);}

void MacaroonForm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    func(); // Call func() when the widget is shown
}

MacaroonForm::~MacaroonForm()
{
    ui->numberqwert->setText(QString::number(0));
    delete ui;
}
void MacaroonForm::func()
{
    std::string filename = "data.json";
    std::ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Unable to open file " << filename <<endl;
        return;
    }

    json root;
    file >> root;
    file.close();

    string str = ui->Lab1->text().toStdString();

    // Dynamic memory allocation for the found item
    auto* foundItem = new json;
    auto it = find_if(root["food"].begin(), root["food"].end(),
                           [&str, &foundItem](const auto& item) {
                               if (item["name"] == str)
                               {
                                   *foundItem = item;
                                   return true;
                               }
                               return false;
                           });

    if (it != root["food"].end())
    {
        double price = foundItem->at("price");
        ui->L1->setText(QString::number(price));
    }

    // Clean up dynamically allocated memory
    delete foundItem;
}


void MacaroonForm::on_Buttpl_clicked()
{
    int* itemPrice = new int(ui->numberqwert->text().toInt());
    (*itemPrice)++;
    ui->numberqwert->setText(QString::number(*itemPrice));
    // Clean up dynamically allocated memory
    delete itemPrice;
}

void MacaroonForm::on_Buttmin_clicked()
{
    int* itemPrice = new int(ui->numberqwert->text().toInt());
    (*itemPrice)--;
    if (*itemPrice >= 0)
        ui->numberqwert->setText(QString::number(*itemPrice));
    // Clean up dynamically allocated memory
    delete itemPrice;
}



void MacaroonForm::on_pushButton_clicked()
{
    int count = ui->numberqwert->text().toInt();
    if(!(count == 0)){
        string filename = "TTL.json";
        ifstream file(filename);
        if (!file.is_open())
        {
            cout << "Unable to open file " << filename << endl;
            return;
        }
        json root;
        file >> root;
        file.close();

        string name = ui->Lab1->text().toStdString();


        bool exists = false;
        for (const auto& product : root["product"]) {
            if (product["name"] == name && product["count"] == count) {
                exists = true;
                break;
            }
        }

        if (!exists && count > 0) {
            // Dynamic memory allocation for the new product object
            json* newProduct = new json;
            (*newProduct)["name"] = name;
            (*newProduct)["count"] = count;

            // Add the new product object to the "product" array
            root["product"].push_back(*newProduct);

            // Write the changes back to the JSON file
            ofstream bum(filename);
            bum << root.dump(4);
            bum.close();

            // Clean up dynamically allocated memory
            delete newProduct;
        }
        //ui->numberqwert->setText(QString::number(0));

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
    else
        QMessageBox::critical(this, "Problem", "Incorrect number of product units entered");


}


void MacaroonForm::on_Zerno_clicked()
{
    ui->numberqwert->setText(QString::number(0));
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
