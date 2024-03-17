#include "settingform.h"
#include "ui_settingform.h"
#include <bits/stdc++.h>

#include "mainwindow.h"
using namespace std;


SettingForm::SettingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingForm)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &SettingForm::on_Zerno_clicked);
    installEventFilter(this);

}
void SettingForm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    func1(); // Call func() when the widget is shown
}
void SettingForm::func1(){
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
    cout << "Current prices:" << endl;
    for (const auto& item : root["drinks"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l1->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e1->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["drinks"])
    {
        if (item["name"].is_string() && item["name"].get<std::string>() == ui->l2->text().toStdString())
        {
           if (item["price"].is_number_integer())
           {
               int itemPrice = item["price"].get<int>();
               ui->e2->setText(QString::number(itemPrice));
           }
        }
    }
    for (const auto& item : root["drinks"])
    {
        if (item["name"].is_string() && item["name"].get<std::string>() == ui->l3->text().toStdString())
        {
           if (item["price"].is_number_integer())
           {
               int itemPrice = item["price"].get<int>();
               ui->e3->setText(QString::number(itemPrice));
           }
        }
    }
    for (const auto& item : root["drinks"])
    {
        if (item["name"].is_string() && item["name"].get<std::string>() == ui->l4->text().toStdString())
        {
           if (item["price"].is_number_integer())
           {
               int itemPrice = item["price"].get<int>();
               ui->e4->setText(QString::number(itemPrice));
           }
        }
    }        for (const auto& item : root["drinks"])
    {
        if (item["name"].is_string() && item["name"].get<std::string>() == ui->l5->text().toStdString())
        {
           if (item["price"].is_number_integer())
           {
               int itemPrice = item["price"].get<int>();
               ui->e5->setText(QString::number(itemPrice));
           }
        }
    }
    for (const auto& item : root["drinks"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l6->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e6->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["drinks"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l7->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e7->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["drinks"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l8->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e8->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["drinks"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l9->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e9->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["drinks"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l10->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e10->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["drinks"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l11->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e11->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["drinks"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l12->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e12->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["food"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l13->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e13->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["food"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l14->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e14->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["food"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l15->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e15->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["food"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l16->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e16->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["food"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l17->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e17->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["food"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l18->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e18->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["food"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l19->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e19->setText(QString::number(itemPrice));
               }
            }
        }
    for (const auto& item : root["food"])
        {
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l20->text().toStdString())
            {
               if (item["price"].is_number_integer())
               {
                   int itemPrice = item["price"].get<int>();
                   ui->e20->setText(QString::number(itemPrice));
               }
            }
        }
    cout << "Current prices:" << endl;
}
SettingForm::~SettingForm()
{
    delete ui;
}
void SettingForm::on_Zerno_clicked()
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


void SettingForm::on_p1_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l1->text().toStdString())
                item["price"] = ui->e1->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p2_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l2->text().toStdString())
                item["price"] = ui->e2->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p3_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l3->text().toStdString())
                item["price"] = ui->e3->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p4_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l4->text().toStdString())
                item["price"] = ui->e4->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p5_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l5->text().toStdString())
                item["price"] = ui->e5->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p6_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l6->text().toStdString())
                item["price"] = ui->e6->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p7_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l7->text().toStdString())
                item["price"] = ui->e7->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p8_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l8->text().toStdString())
                item["price"] = ui->e8->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p9_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l9->text().toStdString())
                item["price"] = ui->e9->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p10_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l10->text().toStdString())
                item["price"] = ui->e10->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p11_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l11->text().toStdString())
                item["price"] = ui->e11->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p12_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l12->text().toStdString())
                item["price"] = ui->e12->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
void SettingForm::on_p13_clicked()
{    string filename = "data.json";
     ifstream file(filename);

     if (!file.is_open())
     {
         cout << "Unable to open file " << filename << endl;
         return;
     }
     json root;
     file >> root;
     file.close();
 for (auto& item : root["drinks"])
         if (item["name"].is_string() && item["name"].get<std::string>() == ui->l13->text().toStdString())
             item["price"] = ui->e13->text().toInt();
 ofstream bum(filename);
     bum << root.dump(4);
     bum.close();

}
void SettingForm::on_p14_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l14->text().toStdString())
                item["price"] = ui->e14->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}void SettingForm::on_p15_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l15->text().toStdString())
                item["price"] = ui->e15->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}void SettingForm::on_p16_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l16->text().toStdString())
                item["price"] = ui->e16->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}void SettingForm::on_p17_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l17->text().toStdString())
                item["price"] = ui->e17->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}void SettingForm::on_p18_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l18->text().toStdString())
                item["price"] = ui->e18->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}void SettingForm::on_p19_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l19->text().toStdString())
                item["price"] = ui->e19->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}void SettingForm::on_p20_clicked()
{
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
    for (auto& item : root["drinks"])
            if (item["name"].is_string() && item["name"].get<std::string>() == ui->l20->text().toStdString())
                item["price"] = ui->e20->text().toInt();
    ofstream bum(filename);
        bum << root.dump(4);
        bum.close();
}
