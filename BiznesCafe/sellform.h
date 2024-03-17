#ifndef SELLFORM_H
#define SELLFORM_H

#include <QWidget>
#include "settingform.h"
#include "macchiatoform.h"
#include "cappuccinoform.h"
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

#include "paymethodform.h"

namespace Ui {
class SellForm;
}

class SellForm : public QWidget
{
    Q_OBJECT

public:
    explicit SellForm(QWidget *parent = nullptr);
    ~SellForm();
private slots:

    void on_Zerno_clicked();

    void on_Setting_clicked();
    void on_FlatWhite_clicked();

    void on_Cappucino_clicked();

    void on_macchiato_clicked();

    void on_Latte_clicked();

    void on_Espresso_clicked();

    void on_Doppio_clicked();

    void on_Raf_clicked();

    void on_Americano_clicked();

    void on_Americano_milk_clicked();

    void on_Black_clicked();

    void on_Green_clicked();

    void on_Cocoa_clicked();

    void on_Eclairs_clicked();

    void on_Profiteroles_clicked();

    void on_Macaroon_clicked();

    void on_Candies_clicked();

    void on_Pies_clicked();

    void on_Quiche_clicked();

    void on_Croissant_clicked();

    void on_Peanuts_clicked();

    void on_pay_clicked();

private:
    Ui::SellForm *ui;
    SettingForm windows;
    MacchiatoForm windowmacchi;
    CappuccinoForm windowCappuc;
    LatteForm windowLatt;
    FlatWhForm windowFlatw;
    EspressoForm windowespr;
    DoppioForm windowdoppio;
    RafForm windowRaf;
    AmericanoForm windowAmer;
    Americ_w_mForm windowAmerwM;
    CocoaForm windowcoc;
    Tea_blackForm windowBl;
    Tea_greenForm windowGr;
    EclairsForm windowEclr;
    MacaroonForm windowmaca;
    PeanutsForm windowpeana;
    ProfiterolesForm windowProf;
    CandiesForm windowCand;
    CroissantForm windowCroi;
    PiesForm windowpie;
    QuicheForm windowQui;

    PaymethodForm windowPay;
};

#endif // SELLFORM_H
