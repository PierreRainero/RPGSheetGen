using std::ostream;

#include "Object.h"

class Weapon : public Object {
	public:
		Weapon();
		Weapon(string name, float weight, float power, float cadence);
		~Weapon();

        float getPower();
        float getCadence();

        friend ostream& operator<< (ostream& os, Weapon weapon);

	private:
		float power;
        float cadence;
};