#ifndef MAINWINDOWS_H
#define MAINWINDOWS_H

#include <gtkmm-3.0/gtkmm.h>
#include <Character.h>
#include <iostream>
#include <CreatItem.h>
#include <CreateCharac.h>

class MainWindows : public Gtk::Window
{
    public:
        MainWindows();
        virtual ~MainWindows();

    protected:

    private:

    Character* Charac;
    Gtk::Notebook* NoteB;
    Gtk::VBox* boiteVGlobal;
    Gtk::HBox* boiteH;
    Gtk::VBox* boiteVInfo;
    Gtk::VBox* boiteVInfoVal;
    Gtk::VBox* boiteVStat;
    Gtk::VBox* boiteVValue;
    Gtk::HBox* boiteHItem;
    Gtk::VBox* boiteVItem;
    Gtk::HBox* boiteHModif;
    Gtk::HBox* boiteEquipement;
    Gtk::VBox* boiteVF;
    Gtk::HBox* boiteButonItem;

    Gtk::ComboBoxText ListPerso;

    Gtk::Label* Name;
    Gtk::Label* Class;
    Gtk::Label* Weight;
    Gtk::Label* Money;
    Gtk::Label* Life;

    Gtk::Label* NameVal;
    Gtk::Label* ClassVal;
    Gtk::Label* WeightVal;
    Gtk::Label* MoneyVal;
    Gtk::Label* LifeVal;

    Gtk::Label* Stats;
    Gtk::Label* Power;
    Gtk::Label* Cadence;
    Gtk::Label* MagPro;
    Gtk::Label* PhyPro;

    Gtk::Label* NullZone2;
    Gtk::Label* PowerVal;
    Gtk::Label* CadenceVal;
    Gtk::Label* MagProVal;
    Gtk::Label* PhyProVal;


    Gtk::Label* Item;
    Gtk::Label* NullZoneI1;
    Gtk::Label* NullZoneI2;
    Gtk::Label* NullZoneI3;
    Gtk::Table* ItemT;

    Gtk::ComboBoxText Modif;
    Gtk::Entry ModifText;
    Gtk::Button* ButtonValModif;
    Gtk::Button* ButonNewPerso;

    Gtk::Label* ClotheEq;
    Gtk::Label* ClotheEqVal;
    Gtk::Label* WeaponEq;
    Gtk::Label* WeaponEqVal;

    Gtk::Button* butonAddItem;
    Gtk::Button* butonCreateItem;


    void ChangePerso();
    void ChangeTextModif();
    void UpdateValue();
    void AddItem();
    void NewItem();
    void NewPerso();

};

#endif // MAINWINDOWS_H
