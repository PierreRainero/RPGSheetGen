#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
#include "Clothe.h"

using namespace std;

Clothe::Clothe() : Object(){
    magicProtection = 0.;
    physicalProtection = 0.;
}

Clothe::Clothe(string name, float weight, float magicProtection, float physicalProtection) : Object(name, weight){
    this->magicProtection = magicProtection;
    this->physicalProtection = physicalProtection;
}

Clothe::~Clothe(){
}

float Clothe::getMagicProtection(){
    return magicProtection;
}

float Clothe::getPhysicalProtection(){
    return physicalProtection;
}

void Clothe::setMagicProtection(float magicProtection){
	this->magicProtection=magicProtection;
}

void Clothe::setPhysicalProtection(float physicalProtection){
	this->physicalProtection=physicalProtection;
}

ostream& operator<< (ostream& os, Clothe clothe){
	os << clothe.getName() << '(' << clothe.getWeight() << "):C[" << clothe.getMagicProtection() << ',' << clothe.getPhysicalProtection() << ']';

	return os;
}
