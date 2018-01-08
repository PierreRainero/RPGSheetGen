#include <iostream>
#include <gtkmm-3.0/gtkmm.h>

#include "MainWindows.h"

using namespace std;

int main(int argc, char* argv[])
{
    Gtk::Main app(argc, argv);
    MainWindows fenetre;
    Gtk::Main::run(fenetre);
    return 0;
}
