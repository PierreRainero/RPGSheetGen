#include "CreateCharac.h"

CreateCharac::CreateCharac()
{
    MainBox = Gtk::manage(new Gtk::HBox(false,10));
    LabelBox = Gtk::manage(new Gtk::VBox(false,10));
    EntryBox = Gtk::manage(new Gtk::VBox(false,10));

    Name = Gtk::manage(new Gtk::Label("Name :"));
    Classe = Gtk::manage(new Gtk::Label("Class :"));
    MaxLife = Gtk::manage(new Gtk::Label("Max Life :"));
    MaxWeight = Gtk::manage(new Gtk::Label("Max Weight :"));
    EmptyL = Gtk::manage(new Gtk::Label(""));

    Val = Gtk::manage(new Gtk::Button("Create!"));
    Val->signal_clicked().connect(sigc::mem_fun(*this,&CreateCharac::ValFonction));

    LabelBox->pack_start(*Name);
    LabelBox->pack_start(*Classe);
    LabelBox->pack_start(*MaxLife);
    LabelBox->pack_start(*MaxWeight);
    LabelBox->pack_start(*EmptyL);

    EntryBox->pack_start(NameE);
    EntryBox->pack_start(ClassCombo);
    EntryBox->pack_start(MaxLifeE);
    EntryBox->pack_start(MaxWeightE);
    EntryBox->pack_start(*Val);

    MainBox->pack_start(*LabelBox);
    MainBox->pack_start(*EntryBox);

    this->add(*MainBox);
    this->show_all();
}

CreateCharac::~CreateCharac()
{
    //dtor
}

void CreateCharac::ValFonction(){
    //NewCharac(NameE.get_text(),0,MaxLifeE.get_text(),MaxWeightE.get_text(),ClassCombo.get_active_text());
    this->close();
}

void CreateCharac::Filler(){

}
