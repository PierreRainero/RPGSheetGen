#ifndef CHARACT_H
#define CHARACT_H

#include <map>
#include <utility>

using std::string;
using std::ostream;

#include "Class.h"
#include "Weapon.h"
#include "Clothe.h"

class Character{
	public:
		Character();
		Character(string name, int age, int maxLife, float maxWeight, Class characterClass);
		~Character();

		string getName();
		int getAge();
		string getClassName();
		int getMaxLife();
		int getCurrentLife();
		float getMaxWeight();
		float getCurrentWeight();
		float getCurrentMoney();
		Weapon getEquipedWeapon();
		Clothe getEquipedClothe();

		void setName(string name);
		void setAge(int newAge);
		void setClassName(string className);
		void setClass(Class cla);
		void setMaxLife(int maxLife);
		void setCurrentLife(int currentlife);
		void setMaxWeight(float maxWeight);
		void setCurrentWeight(float currentWeight);
		void setCurrentMoney(float money);

		friend ostream& operator<< (ostream& os, Character character);

		void heal(int lifeHealed);
		void takeDamage(int lifeLost);

		void addMoney(float quantity);
		void useMoney(float quantity);

		void addObject(Object object, int quantity);
		void removeObject(Object object, int quantity);
		bool hasObject(Object object);

		void equipWeapon(Weapon weapon);
		void setEqWeapon(Weapon weapon);
		void equipClothe(Clothe clothe);
		void setEqClothe(Clothe clothe);
		std::map<string, std::pair<Object*,int> > getBag();

	private:
		string name;
		int age;
		Class characterClass;
		int maxLife;
		int currentLife;
		float maxWeight;
		float currentWeight;
		float money;
		std::map<string, std::pair<Object*,int> > bag;
		Weapon equipedWeapon;
		Clothe equipedClothe;

		bool canCarrythis(float weight);
		//std::map<string, std::pair<Object*,int> > getBag();
};

#endif
