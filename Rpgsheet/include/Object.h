using std::ostream;
using std::string;

#ifndef OBJECT_H
#define OBJECT_H

class Object{
	public:
		Object();
		Object(string name, float weight);
		~Object();

		string getName();
		float getWeight();

		friend ostream& operator<< (ostream& os, Object object);

	private:
		string name;
		float weight;
};

#endif