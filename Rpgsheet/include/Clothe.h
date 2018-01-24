using std::ostream;

#include "Object.h"

class Clothe : public Object {
	public:
		Clothe();
		Clothe(string name, float weight, float magicProtection, float physicalProtection);
		~Clothe();

        float getMagicProtection();
        float getPhysicalProtection();

        friend ostream& operator<< (ostream& os, Clothe clothe);

	private:
		float magicProtection;
        float physicalProtection;
};