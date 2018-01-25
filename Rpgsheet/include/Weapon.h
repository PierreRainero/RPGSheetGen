#ifndef WEAPON_H
#define WEAPON_H

using std::fstream;

#include "Object.h"

class Weapon : public Object {
	public:
		Weapon();
		Weapon(string name, float weight, float power, float cadence);
		~Weapon();

        float getPower();
        float getCadence();
        void setPower(float power);
        void setCadence(float cadence);

        friend ostream& operator<< (ostream& os, Weapon weapon);

	private:
		float power;
    float cadence;
};
#endif
