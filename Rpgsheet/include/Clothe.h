#ifndef CLOTHE_H
#define CLOTHE_H

using std::ostream;
using std::fstream;


#include "Object.h"

class Clothe : public Object {
	public:
		Clothe();
		Clothe(string name, float weight, float magicProtection, float physicalProtection);
		~Clothe();

    float getMagicProtection();
    float getPhysicalProtection();
    void setMagicProtection(float magicProtection);
    void setPhysicalProtection(float physicalProtection);

    friend ostream& operator<< (ostream& os, Clothe clothe);

	private:
		float magicProtection;
    float physicalProtection;
};

#endif
