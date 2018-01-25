#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <map>
#include <vector>
#include <utility>

#include "Save.h"

using namespace std;

Save::Save(){
	vector<Object> objtab=readObjectstxt();
	vector<Weapon> weapontab=readWeaponstxt();
	vector<Clothe> clothetab=readClothestxt();
	vector<Class> classtab=readClassestxt();
	vector<string> charactab=readcharacterstxt();
	this->objtab=objtab;
	this->weapontab=weapontab;
	this->clothetab=clothetab;
	this->classtab=classtab;
	this->charactab=charactab;
}

Save::Save(vector<Object> objtab, vector<Weapon> weapontab, vector<Clothe> clothetab, vector<Class> classtab, vector<string> charactab){
	this->objtab=objtab;
	this->weapontab=weapontab;
	this->clothetab=clothetab;
	this->classtab=classtab;
	this->charactab=charactab;
}

Save::~Save(){

}

vector<Object> Save::readObjectstxt(){
	ifstream objects("objects.txt", ios::in);
	vector<Object> objtab;
	Object obj; 
	if(objects)
	{
		cout << "objects.txt succesfully opened !" <<endl;
		string objname;
		float objweight;
		while(objects >> objname >> objweight){
			obj.setName(objname);
			obj.setWeight(objweight);
			objtab.push_back(obj);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	objects.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
	return(objtab);
}

void Save::listObjects(){
	cout <<endl;
	cout << "List of existing objects:" <<endl;
	for(int i(0); i<objtab.size(); ++i)
	{
		cout <<objtab[i] <<endl;
	}
}

void Save::WriteObjectstxt(){
	ofstream objects("objects.txt", ios::out | ios::trunc);
	if(objects)
	{
		cout << "objects.txt succesfully opened !" <<endl;
		for(int i(0); i<objtab.size(); ++i){
			objects << objtab[i].getName() << " " << objtab[i].getWeight() <<endl;
			//objtab.push_back(obj);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	objects.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
}

void Save::setObjects(vector<Object> objtab){
	this->objtab=objtab;
}

vector<Object> Save::getObjects(){
	return(objtab);
}

vector<Weapon> Save::readWeaponstxt(){
	ifstream weapons("weapons.txt", ios::in);
	vector<Weapon> weapontab;
	Weapon weapon; 
	if(weapons)
	{
		cout << "weapons.txt succesfully opened !" <<endl;
		string weaponname;
		float weaponweight;
		float weaponpower;
		float weaponcadence;
		while(weapons >> weaponname >> weaponweight >> weaponpower >> weaponcadence){
			weapon.setName(weaponname);
			weapon.setWeight(weaponweight);
			weapon.setPower(weaponpower);
			weapon.setCadence(weaponcadence);
			weapontab.push_back(weapon);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	weapons.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
	return(weapontab);
}

void Save::listWeapons(){
	cout <<endl;
	cout << "List of existing weapons:" <<endl;
	for(int i(0); i<weapontab.size(); ++i)
	{
		cout <<weapontab[i] <<endl;
	}
}

void Save::WriteWeaponstxt(){
	ofstream weapons("weapons.txt", ios::out | ios::trunc);
	if(weapons)
	{
		cout << "weapons.txt succesfully opened !" <<endl;
		for(int i(0); i<weapontab.size(); ++i){
			weapons << weapontab[i].getName() << " " << weapontab[i].getWeight() << " " << weapontab[i].getPower() << " " << weapontab[i].getCadence() <<endl;
			//objtab.push_back(obj);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	weapons.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
}

void Save::setWeapons(vector<Weapon> weapontab){
	this->weapontab=weapontab;
}

vector<Weapon> Save::getWeapons(){
	return(weapontab);
}

vector<Clothe> Save::readClothestxt(){
	ifstream clothes("clothes.txt", ios::in);
	vector<Clothe> clothestab;
	Clothe clothe; 
	if(clothes)
	{
		cout << "clothes.txt succesfully opened !" <<endl;
		string clothename;
		float clotheweight;
		float clotheMgDef;
		float clothePhyDef;
		while(clothes >> clothename >> clotheweight >> clotheMgDef >> clothePhyDef){
			clothe.setName(clothename);
			clothe.setWeight(clotheweight);
			clothe.setMagicProtection(clotheMgDef);
			clothe.setPhysicalProtection(clothePhyDef);
			clothestab.push_back(clothe);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	clothes.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
	return(clothestab);
}

void Save::listClothes(){
	cout <<endl;
	cout << "List of existing clothes:" <<endl;
	for(int i(0); i<clothetab.size(); ++i)
	{
		cout <<clothetab[i] <<endl;
	}
}

void Save::WriteClothestxt(){
	ofstream clothes("clothes.txt", ios::out | ios::trunc);
	if(clothes)
	{
		cout << "clothes.txt succesfully opened !" <<endl;
		for(int i(0); i<clothetab.size(); ++i){
			clothes << clothetab[i].getName() << " " << clothetab[i].getWeight() << " " << clothetab[i].getMagicProtection() << " " << clothetab[i].getPhysicalProtection() <<endl;
			//objtab.push_back(obj);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	clothes.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
}

void Save::setClothes(vector<Clothe> clothetab){
	this->clothetab=clothetab;
}
		
vector<Clothe> Save::getClothes(){
	return(clothetab);
}

vector<Class> Save::readClassestxt(){
	ifstream classes("classes.txt", ios::in);
	vector<Class> classtab;
	Class clas; 
	if(classes)
	{
		cout << "classes.txt succesfully opened !" <<endl;
		string classname;
		while(classes >> classname){
			clas.setName(classname);
			classtab.push_back(clas);
		}
	classes.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
	return(classtab);
}

void Save::listclasses(){
	cout <<endl;
	cout << "List of existing classes:" <<endl;
	for(int i(0); i<classtab.size(); ++i)
	{
		cout << classtab[i].getName() <<endl;
	}
}

void Save::WriteClassestxt(){
	ofstream classes("classes.txt", ios::out | ios::trunc);
	if(classes)
	{
		cout << "classes.txt succesfully opened !" <<endl;
		for(int i(0); i<classtab.size(); ++i){
			classes << classtab[i].getName() <<endl;
			//objtab.push_back(obj);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	classes.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
}

void Save::setClasses(vector<Class> classtab){
	this->classtab=classtab;
}
		
vector<Class> Save::getClasses(){
	return(classtab);
}

Character Save::getCharacter(string character){
	Character charac;
	ifstream characflow(character+".txt", ios::in);
	if(characflow){
		cout << character << ".txt succesfully opened !" <<endl;
		string name;
		int age;
		string className;
		int maxLife;
		int currentLife;
		float maxWeight;
		float money;
		string weaponName;
		string clotheName;
		characflow >> name >> age >> className >> maxLife >> currentLife >> maxWeight >> money >> weaponName >> clotheName;
		charac.setName(name);
		charac.setAge(age);
		int triggerClass=0;
		for(int i(0); i<classtab.size(); ++i)
		{
			if(classtab[i].getName().compare(className)==0){
			charac.setClass(classtab[i]);
			triggerClass++;
			}
		}
		if(triggerClass==0){
			Class cla(className);
			cout << "New class created: " << className <<endl;
			charac.setClass(cla);
		}
		charac.setMaxLife(maxLife);
		charac.setCurrentLife(currentLife);
		charac.setMaxWeight(maxWeight);
		charac.setCurrentMoney(money);
		int triggerWeapon=0;
		for(int i(0); i<weapontab.size(); ++i)
		{
			if(weapontab[i].getName().compare(weaponName)==0){
			
			charac.setEqWeapon(weapontab[i]);
			triggerWeapon++;
			}
		}
		if(triggerWeapon==0){
			//Weapon wea(weaponName,);
			cout << "Weapon " << weaponName << " is unknown" <<endl;
			//Gandalf.equipWeapon(wea);
		}
		int triggerClothe=0;
		for(int i(0); i<clothetab.size(); ++i)
		{
			if(clothetab[i].getName().compare(clotheName)==0){
			charac.setEqClothe(clothetab[i]);
			triggerClothe++;
			}
		}
		if(triggerClothe==0){
			//Weapon wea(weaponName,);
			cout << "Clothe " << weaponName << " is unknown" <<endl;
			//Gandalf.equipWeapon(wea);
		}
		string objName;
		int objNb;
		while(characflow >> objName >> objNb){
			int triggerObject=0;
			for(int i(0); i<objtab.size(); ++i)
			{
				if(objtab[i].getName().compare(objName)==0){
				charac.addObject(objtab[i],objNb);
				triggerObject++;
				}
			}
			if(triggerObject==0){
				//Weapon wea(weaponName,);
				cout << "Object " << objName << " is unknown" <<endl;
				//Gandalf.equipWeapon(wea);
			}
		}
	characflow.close();	
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
	return(charac);
}

vector<string> Save::readcharacterstxt(){
	ifstream characters("characters.txt", ios::in);
	vector<string> charactab;
	if(characters)
	{
		cout << "characters.txt succesfully opened !" <<endl;
		string name;
		while(characters >> name){
			charactab.push_back(name);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	characters.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
	return(charactab);
}

void Save::listCharacters(){
	cout <<endl;
	cout << "List of existing characters:" <<endl;
	for(int i(0); i<charactab.size(); ++i)
	{
		cout <<charactab[i] <<endl;
	}
}

void Save::Writecharacterstxt(){
	ofstream characters("characters.txt", ios::out | ios::trunc);
	if(characters)
	{
		cout << "characters.txt succesfully opened !" <<endl;
		for(int i(0); i<charactab.size(); ++i){
			characters << charactab[i] <<endl;
			//objtab.push_back(obj);
			//cout << "Object: " << objname << endl;
			//cout << "Weight: " << objweight << endl;
		}
	characters.close();
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
}

void Save::WriteCharactertxt(string character, Character charac){
	ofstream characflow(character+".txt", ios::out | ios::trunc);
	if(characflow){
		cout << character << ".txt succesfully opened !" <<endl;
		characflow << charac.getName() << endl << charac.getAge() << endl << charac.getClassName() << endl << charac.getMaxLife() <<endl;
		characflow << charac.getCurrentLife() << endl << charac.getMaxWeight() << endl << charac.getCurrentWeight() << endl << charac.getEquipedWeapon().getName() << endl << charac.getEquipedClothe().getName() <<endl;
		map<string, pair<Object*,int> > tmp = charac.getBag();
		map<string, pair<Object*,int> >::iterator it;
		for(it = tmp.begin(); it != tmp.end(); it++){
			characflow << it->first << " " << it->second.second <<endl;;
		}
	}
	else
	{
		cerr << "impossible de lire le fichier !" << endl;
	}
}

void Save::setCharacters(vector<string> charactab){
	this->charactab=charactab;
}
		
vector<string> Save::getCharacters(){
	return(charactab);
}