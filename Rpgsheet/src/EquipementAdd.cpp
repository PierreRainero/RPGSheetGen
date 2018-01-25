#include "EquipementAdd.h"

EquipementAdd::EquipementAdd()
{
    MainBox = Gtk::manage(new Gtk::VBox(false,10));
    BoxVal1 = Gtk::manage(new Gtk::HBox(false,10));
    BoxVal2 = Gtk::manage(new Gtk::HBox(false,10));

    Equipement.append("Cloth");
    Equipement.append("Weapon");
    Equipement.set_active_text("Cloth");
    Equipement.signal_changed().connect(sigc::mem_fun(*this,&EquipementAdd::filler));
    EquipementName.signal_changed().connect(sigc::mem_fun(*this,&EquipementAdd::info));

    Val1 = Gtk::manage(new Gtk::Label("Val1"));
    Val1E = Gtk::manage(new Gtk::Label("Val1"));
    Val2 = Gtk::manage(new Gtk::Label("Val1"));
    Val2E = Gtk::manage(new Gtk::Label("Val1"));

    BoxVal1->pack_start(*Val1);
    BoxVal1->pack_start(*Val1E);
    BoxVal2->pack_start(*Val2);
    BoxVal2->pack_start(*Val2E);

    Val = Gtk::manage(new Gtk::Button("Validate"));
    Val->signal_clicked().connect(sigc::mem_fun(*this,&EquipementAdd::Valide));

    MainBox->pack_start(Equipement);
    MainBox->pack_start(EquipementName);
    MainBox->pack_start(*BoxVal1);
    MainBox->pack_start(*BoxVal2);
    MainBox->pack_start(*Val);

    this->add(*MainBox);
    this->show_all();

}

EquipementAdd::~EquipementAdd()
{
    //dtor
}

void EquipementAdd::filler(){
   /* if(Equipement.get_active_text() == "Cloth"){
        Val1->set_text("Magic Protec");
        Val2->set_text("Physic Protec");
    }
    else{
        Val1->set_text("Domage");
        Val2->set_text("Cadence");
    }
    info();*/
}

void EquipementAdd::info(){
/* if(Equipement.get_active_text() == "Cloth"){
        Val1E->set_text("Magic Protec");
        Val2E->set_text("Physic Protec");
    }
    else{
        Val1E->set_text("Domage");
        Val2E->set_text("Cadence");
    }*/
}

void EquipementAdd::Valide(){
    this->close();
}
