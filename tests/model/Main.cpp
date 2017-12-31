#include <iostream>

#include "Character.h"

using namespace std;

int main(int argc, const char* argv[]){
    Class wizard("Wizard");
    Character gandalf("Gandalf", 2500, 170, 125.,wizard);
    Weapon woodStick("Wood stick", 8.5, 11., 2.);
    Object titaniumChest("Titanium chest",500);

    gandalf.addMoney(10);
    gandalf.addObject(woodStick, 1);
    gandalf.addObject(titaniumChest, 1);
    gandalf.equipWeapon(woodStick);
    cout << gandalf << endl;

    cout << "=========GANDALD THE WHITE=========" << endl;
    Weapon whiteWoodStick("White wood stick", 10., 19., 2.);
    Clothe whiteClothes("White clothes", 4, 12., 3.);
    gandalf.useMoney(2.5);
    gandalf.removeObject(woodStick, 1);
    gandalf.addObject(whiteWoodStick, 1);
    gandalf.addObject(whiteClothes, 1);
    gandalf.addObject(whiteClothes, 2);
    gandalf.equipWeapon(whiteWoodStick);
    gandalf.equipClothe(whiteClothes);
    cout << gandalf << endl;

    return 0;
}