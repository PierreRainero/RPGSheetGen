#ifndef EQUIPEMENTADD_H
#define EQUIPEMENTADD_H

#include <gtkmm.h>

class EquipementAdd : public Gtk::Window
{
    public:
        EquipementAdd();
        virtual ~EquipementAdd();

    protected:

    private:

    Gtk::VBox *MainBox;
    Gtk::HBox *BoxVal1;
    Gtk::HBox *BoxVal2;
    Gtk::ComboBoxText Equipement;
    Gtk::ComboBoxText EquipementName;
    Gtk::Label *Val1;
    Gtk::Label *Val2;
    Gtk::Label *Val1E;
    Gtk::Label *Val2E;
    Gtk::Button *Val;

    void filler();
    void info();
    void Valide();
};

#endif // EQUIPEMENTADD_H
