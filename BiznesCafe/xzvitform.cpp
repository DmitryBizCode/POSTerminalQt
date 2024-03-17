#include "xzvitform.h"
#include "ui_xzvitform.h"
#include "Report.h"
#include "mainwindow.h"
#include "settingform.h"
#include <bits/stdc++.h>

using namespace std;
XzvitForm::XzvitForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::XzvitForm)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &XzvitForm::on_Zerno_clicked);
    installEventFilter(this);

}
void XzvitForm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    updatePrice();
}
XzvitForm::~XzvitForm()
{
    delete ui;
}
void XzvitForm::updatePrice()
{
    ui->Price->setText(QString::number(r.X_zvitz()));
    ui->CashX->setText(QString::number(r.X_zvitx()));
    auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);

    char dateBuffer[100];
    strftime(dateBuffer, sizeof(dateBuffer), "%B %d, %Y",localtime(&currentTime));

    char timeBuffer[100];
    strftime(timeBuffer, sizeof(timeBuffer), "%H:%M",localtime(&currentTime));
    ui->Date->setText(QString(dateBuffer));
    ui->Time->setText(QString(timeBuffer));

}

bool XzvitForm::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == this && event->type() == QEvent::WindowActivate) {
        updatePrice();
    }
    return QWidget::eventFilter(watched, event);
}
void XzvitForm::on_Zerno_clicked()
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

void XzvitForm::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}


