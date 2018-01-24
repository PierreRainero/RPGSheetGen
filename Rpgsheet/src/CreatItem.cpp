#include "CreatItem.h"
using namespace std;
CreatItem::CreatItem()
{
    Item = Gtk::manage(new Gtk::VBox(false,10));
    HItem1 = Gtk::manage(new Gtk::HBox(false,10));
    HItem2 = Gtk::manage(new Gtk::HBox(false,10));

    Selector.append("Normal Item");
    Selector.append("Cloth");
    Selector.append("Weapon");
    Selector.set_active_text("Normal Item");
    Selector.signal_changed().connect(sigc::mem_fun(*this,&CreatItem::SelectorUpdate));

    Name = Gtk::manage(new Gtk::Label("Name:"));
    Weight = Gtk::manage(new Gtk::Label("Weight:"));
    Stat1 = Gtk::manage(new Gtk::Label("stat1"));
    Stat2 = Gtk::manage(new Gtk::Label("stat2"));
    Valid = Gtk::manage(new Gtk::Button("Valide"));
    Valid->signal_clicked().connect(sigc::mem_fun(*this,&CreatItem::Validate));

    HItem1->pack_start(*Name);
    HItem1->pack_start(*Weight);
    HItem1->pack_start(*Stat1);
    HItem1->pack_start(*Stat2);

    HItem2->pack_start(NameE);
    HItem2->pack_start(WeightE);
    HItem2->pack_start(Stat1E);
    HItem2->pack_start(Stat2E);


    Item->pack_start(Selector);
    Item->pack_start(*HItem1);
    Item->pack_start(*HItem2);
    Item->pack_start(*Valid);


    this->add(*Item);
    this->show_all();
    CreatItem::SelectorUpdate();
}

CreatItem::~CreatItem()
{
    //dtor
}

void CreatItem::SelectorUpdate(){
    if(Selector.get_active_text()=="Normal Item"){
        Stat1->set_visible(false);
        Stat2->set_visible(false);
        Stat1E.set_visible(false);
        Stat2E.set_visible(false);
    }
    else if(Selector.get_active_text()=="Cloth"){
        Stat1->set_visible(true);
        Stat2->set_visible(true);
        Stat1->set_text("Magical Protection:");
        Stat2->set_text("Physical Protection:");
        Stat1E.set_visible(true);
        Stat2E.set_visible(true);
    }
    else if(Selector.get_active_text()=="Weapon"){
        Stat1->set_visible(true);
        Stat2->set_visible(true);
        Stat1->set_text("Power:");
        Stat2->set_text("Cadence:");
        Stat1E.set_visible(true);
        Stat2E.set_visible(true);
    }
}

void CreatItem::Validate(){
    if(Selector.get_active_text()=="Normal Item"){
        this->close();
    }
    else if(Selector.get_active_text()=="Cloth"){
        this->close();
    }
    else if(Selector.get_active_text()=="Weapon"){
        this->close();
    }
}
