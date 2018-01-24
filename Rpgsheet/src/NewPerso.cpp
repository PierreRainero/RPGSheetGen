#include "NewPerso.h"

NewPerso::NewPerso()
{
    Item = Gtk::manage(new Gtk::VBox(false,10));
    HItem1 = Gtk::manage(new Gtk::HBox(false,10));
    HItem2 = Gtk::manage(new Gtk::HBox(false,10));

    Name = Gtk::manage(new Gtk::Label("Name:"));
    WeightMax = Gtk::manage(new Gtk::Label("Life Max:"));
    Life = Gtk::manage(new Gtk::Label("Weight Max"));
    ClasseL = Gtk::manage(new Gtk::Label("Class:"));
    Valid = Gtk::manage(new Gtk::Button("Valide"));
    //Valid->signal_clicked().connect(sigc::mem_fun(*this,&CreatItem::Validate));

    HItem1->pack_start(*Name);
    HItem1->pack_start(*Life);
    HItem1->pack_start(*WeightMax);
    HItem1->pack_start(*ClasseL);

    HItem2->pack_start(NameE);
    HItem2->pack_start(lifeE);
    HItem2->pack_start(WeightE);
    HItem2->pack_start(Classe);

    Item->pack_start(*HItem1);
    Item->pack_start(*HItem2);
    Item->pack_start(*Valid);


    this->add(*Item);
    this->show_all();
}

NewPerso::~NewPerso()
{
    //dtor
}
