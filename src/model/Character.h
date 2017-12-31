using std::ostream;
using std::string;

#include <map>
#include <utility>

#include "Class.h"
#include "Object.h"

class Character{
	public:
		Character();
		Character(string name, int age, int maxLife, Class characterClass);
		~Character();

		string getName();
		int getAge();
		string getClassName();
		int getCurrentLife();
		float getCurrentMoney();

		void setAge(int newAge);

		friend ostream& operator<< (ostream& os, Character character);

		void heal(int lifeHealed);
		void takeDamage(int lifeLost);

		void addMoney(float quantity);
		void useMoney(float quantity);

		void addObject(Object object, int quantity);
		void removeObject(Object object, int quantity);
		bool hasObject(Object object);

	private:
		string name;
		int age;
		Class characterClass;
		int maxLife;
		int currentLife;
		float money;
		std::map<string, std::pair<Object*,int> > bag;

		std::map<string, std::pair<Object*,int> > getBag();
		
};