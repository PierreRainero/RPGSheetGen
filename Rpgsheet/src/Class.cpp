#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
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

void Class::setName(string name){
	this->name=name;
}
