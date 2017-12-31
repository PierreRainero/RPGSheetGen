#include <iostream>

#include "Character.h"

using namespace std;

int main(int argc, const char* argv[]){
    Class wizard("Wizard");
    Character gandalf("Gandalf", 2500, 170, 125.,wizard);
    Object woodStick("Wood stick", 8.5);
    Object titaniumChest("Titanium chest",500);

    gandalf.addMoney(10);
    gandalf.addObject(woodStick, 1);
    gandalf.addObject(titaniumChest, 1);
    cout << gandalf << endl;

    cout << "=========GANDALD THE WHITE=========" << endl;
    Object whiteWoodStick("White wood stick", 10);
    Object whiteClothes("White clothes", 4);
    gandalf.useMoney(2.5);
    gandalf.removeObject(woodStick, 1);
    gandalf.addObject(whiteWoodStick, 1);
    gandalf.addObject(whiteClothes, 1);
    gandalf.addObject(whiteClothes, 2);
    cout << gandalf << endl;

    return 0;
}