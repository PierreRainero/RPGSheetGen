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

    LabelBox.pack_start(*Name);
    LabelBox.pack_start(*Classe);
    LabelBox.pack_start(*MaxLife);
    LabelBox.pack_start(*MaxWeight);

    EntryBox.pack_start(NameE);
    EntryBox.pack_start(ClassCombo);
    EntryBox.pack_start(MaxLifeE);
    EntryBox.pack_start(MaxWeightE);

    MainBox.pack_start(LabelBox);
    MainBox.pack_start(EntryBox);

    this.add(MainBox);
    this.show_all();
}

CreateCharac::~CreateCharac()
{
    //dtor
}
