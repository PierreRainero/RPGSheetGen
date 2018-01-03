#include "MainWindows.h"

MainWindows::MainWindows()
{
    int ecart = 10;

    Gtk::VBox* boiteVGlobal = Gtk::manage(new Gtk::VBox(false, ecart));
    Gtk::HBox* boiteH = Gtk::manage(new Gtk::HBox(true));
    Gtk::VBox* boiteVInfo = Gtk::manage(new Gtk::VBox(false, ecart));
    Gtk::VBox* boiteVInfoVal = Gtk::manage(new Gtk::VBox(false, ecart));
    Gtk::VBox* boiteVStat = Gtk::manage(new Gtk::VBox(false, ecart));
    Gtk::VBox* boiteVValue = Gtk::manage(new Gtk::VBox(false, ecart));
    Gtk::HBox* boiteItem = Gtk::manage(new Gtk::HBox(false,ecart));

    Gtk::Label* Name = Gtk::manage(new Gtk::Label("Name:"));
    Gtk::Label* Class= Gtk::manage(new Gtk::Label("Class:"));
    Gtk::Label* Weight= Gtk::manage(new Gtk::Label("Weight:"));
    Gtk::Label* Money = Gtk::manage(new Gtk::Label("Money:"));
    Gtk::Label* NullZone1 = Gtk::manage(new Gtk::Label(""));

    Gtk::Label* NameVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* ClassVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* WeightVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* MoneyVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* NullZone3 = Gtk::manage(new Gtk::Label(""));

    Gtk::Label* Stats = Gtk::manage(new Gtk::Label("Stats:"));
    Gtk::Label* Power = Gtk::manage(new Gtk::Label("Power:"));
    Gtk::Label* Cadence = Gtk::manage(new Gtk::Label("Cadence:"));
    Gtk::Label* MagPro = Gtk::manage(new Gtk::Label("Magical Protection:"));
    Gtk::Label* PhyPro = Gtk::manage(new Gtk::Label("Physical Protection:"));

    Gtk::Label* NullZone2 = Gtk::manage(new Gtk::Label(""));
    Gtk::Label* PowerVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* CadenceVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* MagProVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* PhyProVal = Gtk::manage(new Gtk::Label("null"));


    Gtk::Label* Item = Gtk::manage(new Gtk::Label("Item:"));
    Gtk::Alignment* Align = Gtk::manage(new Gtk::Alignment(Gtk::ALIGN_START, Gtk::ALIGN_START, 10.0, 0));

    Align->add(*Item);

    boiteVInfo->pack_start(*Name);
    boiteVInfo->pack_start(*Class);
    boiteVInfo->pack_start(*Weight);
    boiteVInfo->pack_start(*Money);
    boiteVInfo->pack_start(*NullZone1);

    boiteVInfoVal->pack_start(*NameVal);
    boiteVInfoVal->pack_start(*ClassVal);
    boiteVInfoVal->pack_start(*WeightVal);
    boiteVInfoVal->pack_start(*MoneyVal);
    boiteVInfoVal->pack_start(*NullZone3);

    boiteVStat->pack_start(*Stats);
    boiteVStat->pack_start(*Power);
    boiteVStat->pack_start(*Cadence);
    boiteVStat->pack_start(*MagPro);
    boiteVStat->pack_start(*PhyPro);

    boiteVValue->pack_start(*NullZone2);
    boiteVValue->pack_start(*PowerVal);
    boiteVValue->pack_start(*CadenceVal);
    boiteVValue->pack_start(*MagProVal);
    boiteVValue->pack_start(*PhyProVal);


    boiteH->pack_start(*boiteVInfo);
    boiteH->pack_start(*boiteVInfoVal);
    boiteH->pack_start(*boiteVStat);
    boiteH->pack_start(*boiteVValue);

    boiteItem->pack_start(*Align);

    boiteVGlobal->pack_start(*boiteH);
    boiteVGlobal->pack_start(*boiteItem);


    this->add(*boiteVGlobal);
    this->show_all();
}

MainWindows::~MainWindows()
{
    //dtor
}
