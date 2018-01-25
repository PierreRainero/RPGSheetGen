#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
#include "Object.h"

using namespace std;

Object::Object(){
	this->name = "";
	this->weight=0.0;
}

Object::Object(string name, float weight){
	this->name = name;
	this->weight = weight;
}

Object::~Object(){
}

string Object::getName(){
	return name;
}

float Object::getWeight(){
	return weight;
}

void Object::setName(string name){
	this->name=name;
}

void Object::setWeight(float w){
	this->weight=w;
}

ostream& operator<< (ostream& os, Object object){
	os << object.getName() << '(' << object.getWeight() << ')';

	return os;
}
