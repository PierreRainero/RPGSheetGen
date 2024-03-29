#include <iostream>

#include "Weapon.h"

using namespace std;

Weapon::Weapon() : Object(){
    power = 0.;
    cadence = 0.;
}

Weapon::Weapon(string name, float weight, float power, float cadence) : Object(name, weight){
    this->power = power;
    this->cadence = cadence;
}

Weapon::~Weapon(){
}

float Weapon::getPower(){
    return power;
}

float Weapon::getCadence(){
    return cadence;
}

ostream& operator<< (ostream& os, Weapon weapon){
	os << weapon.getName() << '(' << weapon.getWeight() << "):W[" << weapon.getPower() << ',' << weapon.getCadence() << ']';

	return os;
}