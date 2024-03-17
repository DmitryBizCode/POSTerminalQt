#include "checkform.h"
#include "ui_checkform.h"
#include "mainwindow.h"

#include <bits/stdc++.h>
#include "nlohmann/json.hpp"
using namespace std;
using json = nlohmann::json;
CheckForm::CheckForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckForm)
{
    ui->setupUi(this);
    installEventFilter(this);

}
void CheckForm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    functodo();
}
CheckForm::~CheckForm()
{
    delete ui;
}
void CheckForm::functodo(){

    ui->label->setText(QString::fromStdString(generateReceiptText()));

        // Read the JSON file
        const string filename = "TTL.json";
        std::ifstream inputFile(filename);
        if (!inputFile.is_open())
        {
            std::cout << "Failed to open file: " << filename << std::endl;
            return;
        }

        // Parse the JSON data
        json jsonData;
        inputFile >> jsonData;

        // Check if "product" key exists in the JSON object
        if (jsonData.contains("product"))
        {
            // Remove the content of the "product" column
            jsonData["product"] = json::array();
        }

        // Close the input file
        inputFile.close();

        // Write the modified JSON back to the file
        std::ofstream outputFile(filename);
        if (!outputFile.is_open())
        {
            std::cout << "Failed to open file for writing: " << filename << std::endl;
            return;
        }

        // Write the JSON data to the output file
        outputFile << std::setw(4) << jsonData << std::endl;

        // Close the output file
        outputFile.close();
}
string CheckForm::generateReceiptText() {
    const string jsonFilePath = "TTL.json";
    ifstream jsonFile(jsonFilePath);
    if (!jsonFile.is_open()) {
        cerr << "Failed to open JSON file." <<endl;
        return "";
    }

    json root;
    jsonFile >> root;

    json products = root["product"];
    if (!products.is_array()) {
        cerr << "Invalid JSON format. 'product' should be an array." <<endl;
        return "";
    }

    std::string receiptText = "Store: Coffee Shop\n"
                              "Address: Dmitry Beznosiuk\n"
                              "Phone: +380123456789\n"
                              "Check\n\n";

    for (const auto& product : products) {
        string name = product["name"].get<string>();
        int count = product["count"].get<int>();
        receiptText += name + " - " + std::to_string(count) + "\n";
    }

    auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);

    char dateBuffer[100];
    strftime(dateBuffer, sizeof(dateBuffer), "%B %d, %Y",localtime(&currentTime));

    char timeBuffer[100];
    strftime(timeBuffer, sizeof(timeBuffer), "%H:%M",localtime(&currentTime));

    int disc = root["way"][0]["Discount"];
    int report = root["way"][0]["Pay"];
    float total_cost = Product_selection_pay(report , disc);

    receiptText += "\nTotal Amount:" + to_string(total_cost) +"\n"
                   "Cashier: Dmitry Beznosiuk\n"
                   "Date: " + string(dateBuffer) + "\n"
                   "Time: " + string(timeBuffer) + "\n\n"
                   "Best regards,\n"
                   "Dmitry Beznosiuk";
    return receiptText;
}

void CheckForm::on_Zerno_clicked()
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

