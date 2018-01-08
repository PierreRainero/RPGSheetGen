#include "MainWindows.h"
using namespace std;

MainWindows::MainWindows()
{
    Charac = new Character();
    int ecart = 10;
    //this->set_border_width(ecart);

    boiteVGlobal = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteH = Gtk::manage(new Gtk::HBox(true));
    boiteVInfo = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteVInfoVal = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteVStat = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteVValue = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteHItem = Gtk::manage(new Gtk::HBox(false,ecart));
    boiteVItem = Gtk::manage(new Gtk::VBox(false,ecart));
    boiteHModif = Gtk::manage(new Gtk::HBox(false,ecart));

    ListPerso.append("test");
    ListPerso.append("test2");
    ListPerso.set_active_text("test");
    ListPerso.signal_changed().connect(sigc::mem_fun(*this,&MainWindows::ChangePerso));

    Name = Gtk::manage(new Gtk::Label("Name:"));
    Class= Gtk::manage(new Gtk::Label("Class:"));
    Weight= Gtk::manage(new Gtk::Label("Weight:"));
    Money = Gtk::manage(new Gtk::Label("Money:"));
    Life = Gtk::manage(new Gtk::Label("Life:"));

    NameVal = Gtk::manage(new Gtk::Label("null"));
    ClassVal = Gtk::manage(new Gtk::Label("null"));
    WeightVal = Gtk::manage(new Gtk::Label("null"));
    MoneyVal = Gtk::manage(new Gtk::Label("null"));
    LifeVal = Gtk::manage(new Gtk::Label("null"));

    Stats = Gtk::manage(new Gtk::Label("Stats:"));
    Power = Gtk::manage(new Gtk::Label("Power:"));
    Cadence = Gtk::manage(new Gtk::Label("Cadence:"));
    MagPro = Gtk::manage(new Gtk::Label("Magical Protection:"));
    PhyPro = Gtk::manage(new Gtk::Label("Physical Protection:"));

    NullZone2 = Gtk::manage(new Gtk::Label(""));
    PowerVal = Gtk::manage(new Gtk::Label("null"));
    CadenceVal = Gtk::manage(new Gtk::Label("null"));
    MagProVal = Gtk::manage(new Gtk::Label("null"));
    PhyProVal = Gtk::manage(new Gtk::Label("null"));

    Item = Gtk::manage(new Gtk::Label("Item:"));
    NullZoneI1 = Gtk::manage(new Gtk::Label(""));
    NullZoneI2 = Gtk::manage(new Gtk::Label(""));
    NullZoneI3 = Gtk::manage(new Gtk::Label(""));
    ItemT = Gtk::manage(new Gtk::Table(5,2));

    Modif.append("Life");
    Modif.append("Money");
    Modif.set_active_text("Money");
    Modif.signal_changed().connect(sigc::mem_fun(*this,&MainWindows::ChangeTextModif));
    ButtonValModif = Gtk::manage(new Gtk::Button("Valide"));
    //ButtonValModif->signal_clicked().connect(sigc::bind(MainWindows::UpdateValue));

    boiteVInfo->pack_start(*Name);
    boiteVInfo->pack_start(*Class);
    boiteVInfo->pack_start(*Life);
    boiteVInfo->pack_start(*Weight);
    boiteVInfo->pack_start(*Money);


    boiteVInfoVal->pack_start(*NameVal);
    boiteVInfoVal->pack_start(*ClassVal);
    boiteVInfoVal->pack_start(*LifeVal);
    boiteVInfoVal->pack_start(*WeightVal);
    boiteVInfoVal->pack_start(*MoneyVal);


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

    boiteHItem->pack_start(*Item);
    boiteHItem->pack_start(*NullZoneI1);
    boiteHItem->pack_start(*NullZoneI2);
    boiteHItem->pack_start(*NullZoneI3);
    boiteVItem->pack_start(*boiteHItem);


    boiteHModif->pack_start(Modif);
    boiteHModif->pack_start(ModifText);
    boiteHModif->pack_start(*ButtonValModif);

    boiteVGlobal->pack_start(ListPerso);
    boiteVGlobal->pack_start(*boiteH);
    boiteVGlobal->pack_start(*boiteVItem);
    boiteVGlobal->pack_start(*boiteHModif);

    this->add(*boiteVGlobal);
    this->show_all();
    MainWindows::ChangePerso();
}

MainWindows::~MainWindows()
{
    //dtor
}




void MainWindows::ChangePerso(){
    NameVal->set_text(ListPerso.get_active_text());
    //Charac = APPEL SQL (PARAM NOM DU PERSO)

    ClassVal->set_text(Charac->getClassName());
    string life = to_string(Charac->getCurrentLife());
    LifeVal->set_text(life);
    string weight = to_string(Charac->getCurrentWeight());
    WeightVal->set_text(weight);
    string money = to_string(Charac->getCurrentMoney());
    MoneyVal->set_text(money);

    if(Charac->getEquipedWeapon() != NULL){
        string cad = to_string(Charac->getEquipedWeapon()->getCadence());
        CadenceVal->set_text(cad);
        string power = to_string(Charac->getEquipedWeapon()->getPower());
        PowerVal->set_text(power);
    }
    else{
        CadenceVal->set_text("0");
        PowerVal->set_text("0");
    }
    if(Charac->getEquipedClothe() != NULL){
        string vetA = to_string(Charac->getEquipedClothe()->getPhysicalProtection());
        PhyProVal->set_text(vetA);
        string vetM = to_string(Charac->getEquipedClothe()->getMagicProtection());
        MagProVal->set_text(vetM);
    }
    else{
        PhyProVal->set_text("0");
        MagProVal->set_text("0");
    }
    MainWindows::ChangeTextModif();

}

void MainWindows::ChangeTextModif(){
    if(Modif.get_active_text()=="Money"){
        ModifText.set_text("0");
    }
    else if(Modif.get_active_text()=="Life"){
        ModifText.set_text("0");
    }
}

void MainWindows::UpdateValue(){
    int valueUpdate = std::stoi(ModifText.get_text());
    if(valueUpdate < 0 && Modif.get_active_text() == "Life"){
        Charac->takeDamage(-valueUpdate);
    }
    else{
        Charac->heal(valueUpdate);
    }
    if(valueUpdate < 0 && Modif.get_active_text() == "Money"){
        Charac->useMoney(-valueUpdate);
    }
    else{
        Charac->addMoney(valueUpdate);
    }
    ChangePerso();
}

