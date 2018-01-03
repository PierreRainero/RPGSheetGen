#include "MainWindows.h"

MainWindows::MainWindows()
{
    Gtk::VBox* boiteVGlobal = Gtk::manage(new Gtk::VBox(false, 10));
    Gtk::HBox* boiteH = Gtk::manage(new Gtk::HBox(true));
    Gtk::VBox* boiteVInfo = Gtk::manage(new Gtk::VBox(false, 10));
    Gtk::VBox* boiteVStat = Gtk::manage(new Gtk::VBox(false, 10));
    Gtk::VBox* boiteVValue = Gtk::manage(new Gtk::VBox(false, 10));

    Gtk::Label* Name = Gtk::manage(new Gtk::Label("Name"));
    Gtk::Label* Class= Gtk::manage(new Gtk::Label("Class"));
    Gtk::Label* Weight= Gtk::manage(new Gtk::Label("Weight"));
    Gtk::Label* Money = Gtk::manage(new Gtk::Label("Money"));

    Gtk::Label* Stats = Gtk::manage(new Gtk::Label("Stats:"));
    Gtk::Label* Power = Gtk::manage(new Gtk::Label("Power:"));
    Gtk::Label* Cadence = Gtk::manage(new Gtk::Label("Cadence:"));
    Gtk::Label* MagPro = Gtk::manage(new Gtk::Label("Magical Protection:"));
    Gtk::Label* PhyPro = Gtk::manage(new Gtk::Label("Physical Protection:"));

    Gtk::Label* NullZone = Gtk::manage(new Gtk::Label(""));
    Gtk::Label* PowerVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* CadenceVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* MagProVal = Gtk::manage(new Gtk::Label("null"));
    Gtk::Label* PhyProVal = Gtk::manage(new Gtk::Label("null"));


    boiteVInfo->pack_start(*Name);
    boiteVInfo->pack_start(*Class);
    boiteVInfo->pack_start(*Weight);
    boiteVInfo->pack_start(*Money);

    boiteVStat->pack_start(*Stats);
    boiteVStat->pack_start(*Power);
    boiteVStat->pack_start(*Cadence);
    boiteVStat->pack_start(*MagPro);
    boiteVStat->pack_start(*PhyPro);

    boiteVValue->pack_start(*NullZone);
    boiteVValue->pack_start(*PowerVal);
    boiteVValue->pack_start(*CadenceVal);
    boiteVValue->pack_start(*MagProVal);
    boiteVValue->pack_start(*PhyProVal);


    boiteH->pack_start(*boiteVInfo);
    boiteH->pack_start(*boiteVStat);
    boiteH->pack_start(*boiteVValue);


    this->add(*boiteH);

    this->show_all(); //Afficher tous les widgets.
}

MainWindows::~MainWindows()
{
    //dtor
}
