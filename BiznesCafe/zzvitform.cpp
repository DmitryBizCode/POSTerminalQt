#include "zzvitform.h"
#include "ui_zzvitform.h"
#include "Report.h"

#include "mainwindow.h"
#include "settingform.h"
ZzvitForm::ZzvitForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZzvitForm)
{
    ui->setupUi(this);
    installEventFilter(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &ZzvitForm::on_Zerno_clicked);
    installEventFilter(this);
}

ZzvitForm::~ZzvitForm()
{
    delete ui;
}

void ZzvitForm::updatePrice()
{
    float ZVIT = r.Z_zvit();
    float VAT = (ZVIT*5)/6;
    ui->Price->setText(QString::number(ZVIT));
    ui->Price_2->setText(QString::number(VAT));

    auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);

    char dateBuffer[100];
    strftime(dateBuffer, sizeof(dateBuffer), "%B %d, %Y",localtime(&currentTime));

    char timeBuffer[100];
    strftime(timeBuffer, sizeof(timeBuffer), "%H:%M",localtime(&currentTime));
    ui->Date->setText(QString(dateBuffer));
    ui->Time->setText(QString(timeBuffer));

}

bool ZzvitForm::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == this && event->type() == QEvent::WindowActivate) {
        updatePrice();
    }
    return QWidget::eventFilter(watched, event);
}

void ZzvitForm::on_Zerno_clicked()
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

void ZzvitForm::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}

