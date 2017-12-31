#include <iostream>

#include "Object.h"

using namespace std;

Object::Object(){
	this->name = "";
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