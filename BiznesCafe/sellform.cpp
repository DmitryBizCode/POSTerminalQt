#include "sellform.h"
#include "ui_sellform.h"
#include "macchiatoform.h"

#include "mainwindow.h"
#include "settingform.h"
#include "americanoform.h"
#include "latteform.h"
#include "flatwhform.h"
#include "espressoform.h"
#include "doppioform.h"
#include "rafform.h"
#include "tea_greenform.h"
#include "tea_blackform.h"
#include "cocoaform.h"
#include "americ_w_mform.h"
#include "eclairsform.h"
#include "quicheform.h"
#include "profiterolesform.h"
#include "piesform.h"
#include "peanutsform.h"
#include "macaroonform.h"
#include "eclairsform.h"
#include "croissantform.h"
#include "candiesform.h"

SellForm::SellForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellForm)
{
    ui->setupUi(this);
    connect(ui->Zerno, &QPushButton::clicked, this, &SellForm::on_Zerno_clicked);
    installEventFilter(this);
}

SellForm::~SellForm()
{
    delete ui;
}

void SellForm::on_Zerno_clicked()
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

void SellForm::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}

void SellForm::on_FlatWhite_clicked()
{
    hide();
    windowFlatw.showMaximized();
}


void SellForm::on_Cappucino_clicked()
{
    hide();
    windowCappuc.showMaximized();
}


void SellForm::on_macchiato_clicked()
{
    hide();
    windowmacchi.showMaximized();
}


void SellForm::on_Latte_clicked()
{
    hide();
    windowLatt.showMaximized();
}


void SellForm::on_Espresso_clicked()
{
    hide();
    windowespr.showMaximized();
}


void SellForm::on_Doppio_clicked()
{
    hide();
    windowdoppio.showMaximized();
}


void SellForm::on_Raf_clicked()
{
    hide();
    windowRaf.showMaximized();
}


void SellForm::on_Americano_clicked()
{
    hide();
    windowAmer.showMaximized();
}


void SellForm::on_Americano_milk_clicked()
{
    hide();
    windowAmerwM.showMaximized();
}


void SellForm::on_Black_clicked()
{
    hide();
    windowBl.showMaximized();
}


void SellForm::on_Green_clicked()
{
    hide();
    windowGr.showMaximized();
}


void SellForm::on_Cocoa_clicked()
{
    hide();
    windowcoc.showMaximized();
}


void SellForm::on_Eclairs_clicked()
{
    hide();
    windowEclr.showMaximized();
}


void SellForm::on_Profiteroles_clicked()
{
    hide();
    windowProf.showMaximized();
}


void SellForm::on_Macaroon_clicked()
{
    hide();
    windowmaca.showMaximized();
}


void SellForm::on_Candies_clicked()
{
    hide();
    windowCand.showMaximized();
}


void SellForm::on_Pies_clicked()
{
    hide();
    windowpie.showMaximized();
}


void SellForm::on_Quiche_clicked()
{
    hide();
    windowQui.showMaximized();
}


void SellForm::on_Croissant_clicked()
{
    hide();
    windowCroi.showMaximized();
}


void SellForm::on_Peanuts_clicked()
{
    hide();
    windowpeana.showMaximized();
}


void SellForm::on_pay_clicked()
{
    hide();
    windowPay.showMaximized();
}

