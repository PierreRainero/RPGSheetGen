#include <iostream>

#include "Character.h"

using namespace std;

Character::Character(){
	this->name = "";
	this->age = 0;
	this->maxLife = 100;
	currentLife = maxLife;
	money = 0.;
}

Character::Character(string name, int age, int maxLife, Class characterClass){
	this->name = name;
	this->age = age;
	this->maxLife = maxLife;
	currentLife = maxLife;
	this->characterClass = characterClass;
	money = 0.;
}

Character::~Character(){
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

float Character::getCurrentMoney(){
	return money;
}

void Character::setAge(int newAge){
	age = newAge;
}

map<string, pair<Object*,int> > Character::getBag(){
	return bag;
}

ostream& operator<< (ostream& os, Character character){
	os << character.getName() << " :" << endl << "  Age : " << character.getAge() << endl << "  Class : " << character.getClassName() << endl;
	os << "  Money : " << character.getCurrentMoney() << endl;
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

void Character::addObject(Object object, int quantity){
	string objName = object.getName();
	pair<Object*,int> p;
	p.first = &object;

	if(bag.find(objName) != bag.end()){
		p = bag.find(objName)->second;
		p.second = p.second + quantity;
	}else
		p.second = quantity;

	bag[objName]=p;
}

void Character::removeObject(Object object, int quantity){
	string objName = object.getName();

	if(bag.find(objName) == bag.end())
		return;

	pair<Object*,int> p;
	p = bag.find(objName)->second;

	if(p.second-quantity <= 0)
		bag.erase(objName); 
	else{
		p.second = p.second - quantity;
		bag[objName]=p;
	}
}

bool Character::hasObject(Object object){
	return (bag.find(object.getName()) != bag.end());
}