#include "AddItem.h"
using namespace std;
AddItem::AddItem(Character EnterCharac)
{
    ItemCharac = EnterCharac;
    cout<<ItemCharac.getName()<<endl;
    MainBox = Gtk::manage(new Gtk::VBox(false,10));
    ComboBox = Gtk::manage(new Gtk::HBox(false,10));
    InfoBox = Gtk::manage(new Gtk::HBox(false,10));

    Name.signal_changed().connect(sigc::mem_fun(*this,&AddItem::NameChange));
    Weight = Gtk::manage(new Gtk::Label("Weight:"));
    WeightVal = Gtk::manage(new Gtk::Label("null"));
    Val = Gtk::manage(new Gtk::Button("Add"));
    Val->signal_clicked().connect(sigc::mem_fun(*this,&AddItem::ValFunction));


    ComboBox->pack_start(Name);
    InfoBox->pack_start(*Weight);
    InfoBox->pack_start(*WeightVal);

    MainBox->pack_start(*ComboBox);
    MainBox->pack_start(*InfoBox);
    MainBox->pack_start(*Val);

    this->add(*MainBox);
    this->show_all();


}

AddItem::~AddItem()
{

}

void AddItem::NameChange(){
    //WeightVal->set_text(func)
}

void AddItem::Filler(){

}

void AddItem::ValFunction(){
    //ItemCharac.addObject(fun,quantity);
    this->close();
}
