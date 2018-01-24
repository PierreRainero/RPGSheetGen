#include "MainWindows.h"
using namespace std;

MainWindows::MainWindows()
{
    Charac = new Character();
    int ecart = 10;
    //this->set_border_width(ecart);

    boiteVGlobal = Gtk::manage(new Gtk::VBox(false, ecart));
    NoteB = Gtk::manage(new Gtk::Notebook());
    boiteH = Gtk::manage(new Gtk::HBox(true));
    boiteVInfo = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteVInfoVal = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteVStat = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteVValue = Gtk::manage(new Gtk::VBox(false, ecart));
    boiteHItem = Gtk::manage(new Gtk::HBox(false,ecart));
    boiteVItem = Gtk::manage(new Gtk::VBox(false,ecart));
    boiteHModif = Gtk::manage(new Gtk::HBox(false,ecart));
    boiteEquipement = Gtk::manage(new Gtk::HBox(false,ecart));
    boiteVF = Gtk::manage(new Gtk::VBox(false,ecart));
    boiteButonItem = Gtk::manage(new Gtk::HBox(false,ecart));

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
    Power = Gtk::manage(new Gtk::Label("DPS:"));
    Cadence = Gtk::manage(new Gtk::Label(""));
    MagPro = Gtk::manage(new Gtk::Label("Magical Protection:"));
    PhyPro = Gtk::manage(new Gtk::Label("Physical Protection:"));

    NullZone2 = Gtk::manage(new Gtk::Label(""));
    PowerVal = Gtk::manage(new Gtk::Label("null"));
    CadenceVal = Gtk::manage(new Gtk::Label(""));
    MagProVal = Gtk::manage(new Gtk::Label("null"));
    PhyProVal = Gtk::manage(new Gtk::Label("null"));

    ClotheEq = Gtk::manage(new Gtk::Label("Clothe:"));
    ClotheEqVal = Gtk::manage(new Gtk::Label(""));
    WeaponEq = Gtk::manage(new Gtk::Label("Weapon:"));
    WeaponEqVal = Gtk::manage(new Gtk::Label(""));

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
    ButtonValModif->signal_clicked().connect(sigc::mem_fun(*this,&MainWindows::UpdateValue));

    butonAddItem = Gtk::manage(new Gtk::Button("Add Item"));
    butonCreateItem = Gtk::manage(new Gtk::Button("New Item"));
    butonAddItem->signal_clicked().connect(sigc::mem_fun(*this,&MainWindows::AddItems));
    butonCreateItem->signal_clicked().connect(sigc::mem_fun(*this,&MainWindows::NewItem));

    ButonNewPerso = Gtk::manage(new Gtk::Button("New Character"));
    ButonNewPerso->signal_clicked().connect(sigc::mem_fun(*this,&MainWindows::NewPerso));

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
    boiteVStat->pack_start(*MagPro);
    boiteVStat->pack_start(*PhyPro);
    boiteVStat->pack_start(*Cadence);

    boiteVValue->pack_start(*NullZone2);
    boiteVValue->pack_start(*PowerVal);
    boiteVValue->pack_start(*MagProVal);
    boiteVValue->pack_start(*PhyProVal);
    boiteVValue->pack_start(*CadenceVal);


    boiteH->pack_start(*boiteVInfo);
    boiteH->pack_start(*boiteVInfoVal);
    boiteH->pack_start(*boiteVStat);
    boiteH->pack_start(*boiteVValue);

    boiteEquipement->pack_start(*ClotheEq);
    boiteEquipement->pack_start(*ClotheEqVal);
    boiteEquipement->pack_start(*WeaponEq);
    boiteEquipement->pack_start(*WeaponEqVal);

    boiteHModif->pack_start(Modif);
    boiteHModif->pack_start(ModifText);
    boiteHModif->pack_start(*ButtonValModif);

    boiteVF->pack_start(*boiteH);
    boiteVF->pack_start(*boiteEquipement);
    boiteVF->pack_start(*boiteHModif);
    boiteVF->pack_start(*ButonNewPerso);



    // ONGLET 2

    boiteButonItem->pack_start(*butonAddItem);
    boiteButonItem->pack_start(*butonCreateItem);

    boiteHItem->pack_start(*Item);
    boiteHItem->pack_start(*NullZoneI1);
    boiteHItem->pack_start(*NullZoneI2);
    boiteHItem->pack_start(*NullZoneI3);
    boiteVItem->pack_start(*boiteHItem);
    boiteVItem->pack_start(*boiteButonItem);

    NoteB->append_page(*boiteVF,"Stats");
    NoteB->append_page(*boiteVItem,"Item");
    boiteVGlobal->pack_start(ListPerso);
    boiteVGlobal->pack_start(*NoteB);
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
    string power = to_string(Charac->getDamagePoints());
    PowerVal->set_text(power);
    string vetA = to_string(Charac->getPhysicalProtection());
    PhyProVal->set_text(vetA);
    string vetM = to_string(Charac->getMagicProtection());
    MagProVal->set_text(vetM);
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
    float valueUpdate = std::stof(ModifText.get_text());
    if(valueUpdate < 0 && Modif.get_active_text() == "Life"){
        Charac->takeDamage(-valueUpdate);
    }
    else if (Modif.get_active_text() == "Life"){
        Charac->heal(valueUpdate);
    }
    else if(valueUpdate < 0 && Modif.get_active_text() == "Money"){
        Charac->useMoney(-valueUpdate);
    }
    else if( Modif.get_active_text() == "Money"){
        Charac->addMoney(valueUpdate);
    }
    ChangePerso();
}

void MainWindows::AddItems(){
    AddItem fene(*Charac);
    Gtk::Main::run(fene);
}

void MainWindows::NewItem(){
//    Gtk::Main app(argc, argv);
    CreatItem fenetreNewItem;
    Gtk::Main::run(fenetreNewItem);
    while(fenetreNewItem.is_visible()){
    }
}

void MainWindows::NewPerso(){

    CreateCharac fenetreNewCharac;
    Gtk::Main::run(fenetreNewCharac);
    while(fenetreNewCharac.is_visible()){

    }

}

void Filler(){

}
