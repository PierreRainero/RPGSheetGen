#ifndef ADDITEM_H
#define ADDITEM_H

#include <iostream>
#include <gtkmm.h>
#include <Character.h>

class AddItem : public Gtk::Window
{
    public:
        AddItem(Character);
        virtual ~AddItem();

    protected:

    private:

    Character ItemCharac;
    Gtk::HBox *ComboBox;
    Gtk::HBox *InfoBox;
    Gtk::HBox *QuantityBox;
    Gtk::VBox *MainBox;

    Gtk::ComboBoxText Name;
    Gtk::Label *Weight;
    Gtk::Label *WeightVal;
    Gtk::Button *Val;
    Gtk::Label *Quantity;
    Gtk::SpinButton *QuantityE;


    void Filler();
    void ValFunction();
    void NameChange();
};

#endif // ADDITEM_H
