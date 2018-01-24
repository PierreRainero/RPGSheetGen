#include <iostream>

#include "Character.h"

using namespace std;

Character::Character(){
	this->name = "";
	this->age = 0;
	this->maxLife = 100;
	currentLife = maxLife;
	this->maxWeight = 120.;
	currentWeight = 0.;
	money = 0.;
	equipedWeapon = NULL;
	equipedClothe = NULL;
}

Character::Character(string name, int age, int maxLife, float maxWeight, Class characterClass){
	this->name = name;
	this->age = age;
	this->maxLife = maxLife;
	currentLife = maxLife;
	this->maxWeight = maxWeight;
	currentWeight = 0.;
	this->characterClass = characterClass;
	money = 0.;
	equipedWeapon = NULL;
	equipedClothe = NULL;
}

Character::~Character(){
	bag.clear();
}

string Character::getName(){
	return name;
}

int Character::getAge(){
	return age;
}

string Character::getClassName(){
	return characterClass.getName();
}

int Character::getCurrentLife(){
	return currentLife;
}

float Character::getCurrentWeight(){
	return currentWeight;
}

float Character::getCurrentMoney(){
	return money;
}

Weapon* Character::getEquipedWeapon(){
	return equipedWeapon;
}

Clothe* Character::getEquipedClothe(){
	return equipedClothe;
}

float Character::getDamagePoints(){
	float power=1;

	if(equipedWeapon!=NULL)
		power += equipedWeapon->getPower() * equipedWeapon->getCadence();
	return power;
}

float Character::getMagicProtection(){
	float magicalPro=0.;

	if(equipedClothe!=NULL)
		magicalPro += equipedClothe->getMagicProtection();

	return magicalPro;
}

float Character::getPhysicalProtection(){
	float physicalPro=0.;

	if(equipedClothe!=NULL)
		physicalPro += equipedClothe->getPhysicalProtection();

	return physicalPro;
}

map<string, pair<Object*,int> > Character::getBag(){
	return bag;
}

void Character::setAge(int newAge){
	age = newAge;
}

ostream& operator<< (ostream& os, Character character){
	os << character.getName() << " :" << endl << "  Age : " << character.getAge() << endl << "  Class : " << character.getClassName() << endl;
	os << "  Weight : " << character.getCurrentWeight() << endl;
	os << "  Money : " << character.getCurrentMoney() << endl;
	os << "  Stats :" << endl;
	os << "    Domage points : " << character.getDamagePoints() << endl;
	os << "    Magical protection : " << character.getMagicProtection() << endl;
	os << "    Physical protection : " << character.getPhysicalProtection() << endl;

	os << "  Items :";
	map<string, pair<Object*,int> > tmp = character.getBag();
	map<string, pair<Object*,int> >::iterator it;
	for(it = tmp.begin(); it != tmp.end(); it++){
		os << endl << "    " << it->first << " : " << it->second.second;
	}

	return os;
}

void Character::heal(int lifeHealed){
	int tmp = currentLife + lifeHealed;
	currentLife = (tmp<=maxLife) ? tmp : maxLife;
}

void Character::takeDamage(int lifeLost){
	int tmp = currentLife - lifeLost;
	currentLife = (tmp<0) ? 0 : tmp;
}

void Character::addMoney(float quantity){
	money += quantity;
}

void Character::useMoney(float quantity){
	money -= quantity;
}

bool Character::canCarrythis(float weight){
	return (currentWeight+weight<=maxWeight);
}

void Character::addObject(Object object, int quantity){
	string objName = object.getName();
	pair<Object*,int> p;
	p.first = &object;

	float totalWeight = quantity*object.getWeight();

	if(canCarrythis(totalWeight)){
		if(bag.find(objName) != bag.end()){
			p = bag.find(objName)->second;
			p.second = p.second + quantity;
		}else
			p.second = quantity;

		currentWeight += totalWeight;
		bag[objName]=p;
	}else
		cout << name << " can't carry these objects. " << objName << " not added !" << endl;
}

void Character::removeObject(Object object, int quantity){
	string objName = object.getName();

	if(bag.find(objName) == bag.end())
		return;

	pair<Object*,int> p;
	p = bag.find(objName)->second;
	float totalWeight = quantity*object.getWeight();

	if(p.second-quantity <= 0)
		bag.erase(objName);
	else{
		p.second = p.second - quantity;
		bag[objName]=p;
	}

	currentWeight -= totalWeight;
}

bool Character::hasObject(Object object){
	return (bag.find(object.getName()) != bag.end());
}

void Character::equipWeapon(Weapon weapon){
	if(hasObject(weapon))
		equipedWeapon = &weapon;
}

void Character::equipClothe(Clothe clothe){
	if(hasObject(clothe))
		equipedClothe = &clothe;
}
