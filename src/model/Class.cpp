#include <iostream>

#include "Class.h"

using namespace std;

Class::Class(){
	this->name = "";
}

Class::Class(string name){
	this->name = name;
}

Class::~Class(){
}

string Class::getName(){
	return name;
}