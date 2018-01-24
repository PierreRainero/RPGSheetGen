#ifndef CREATITEM_H
#define CREATITEM_H
#include <iostream>
#include <gtkmm-3.0/gtkmm.h>

class CreatItem : public Gtk::Window
{
    public:
        CreatItem();
        virtual ~CreatItem();

        Gtk::VBox* Item;
        Gtk::HBox* HItem1;
        Gtk::HBox* HItem2;
        Gtk::ComboBoxText Selector;
        Gtk::Label* Name;
        Gtk::Label* Weight;
        Gtk::Label* Stat1;
        Gtk::Label* Stat2;
        Gtk::Entry NameE;
        Gtk::Entry WeightE;
        Gtk::Entry Stat1E;
        Gtk::Entry Stat2E;

        Gtk::Button* Valid;

        void SelectorUpdate();
        void Validate();

    protected:

    private:
};

#endif // CREATITEM_H
