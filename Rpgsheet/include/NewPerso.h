#ifndef NEWPERSO_H
#define NEWPERSO_H

#include <gtkmm.h>

class NewPerso : public Gtk::Window
{
    public:
        NewPerso();
        virtual ~NewPerso();

        Gtk::VBox* Item;
        Gtk::HBox* HItem1;
        Gtk::HBox* HItem2;
        Gtk::ComboBoxText Classe;
        Gtk::Label* Name;
        Gtk::Label* WeightMax;
        Gtk::Label* Life;
        Gtk::Label* ClasseL;
        Gtk::Entry NameE;
        Gtk::Entry WeightE;
        Gtk::Entry lifeE;

        Gtk::Button* Valid;

    protected:

    private:
};

#endif // NEWPERSO_H
