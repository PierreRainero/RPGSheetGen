#ifndef CREATECHARAC_H
#define CREATECHARAC_H

#include <Character.h>
#include <Class.h>
#include<gtkmm.h>

class CreateCharac : public Gtk::Window
{
    public:
        CreateCharac();
        virtual ~CreateCharac();

    protected:

    private:
    Character NewCharac;

    Gtk::HBox* MainBox;
    Gtk::VBox* LabelBox;
    Gtk::VBox* EntryBox;

    Gtk::Label* Name;
    Gtk::Label* MaxLife;
    Gtk::Label* MaxWeight;
    Gtk::Label* Classe;
    Gtk::Label* EmptyL;

    Gtk::Entry NameE;
    Gtk::Entry MaxLifeE;
    Gtk::Entry MaxWeightE;
    Gtk::ComboBoxText ClassCombo;
    Gtk::Button *Val;

    void ValFonction();
    void Filler();



};

#endif // CREATECHARAC_H
