#ifndef OBJECT_H
#define OBJECT_H

using std::ostream;
using std::string;
using std::fstream;


class Object{
	public:
		Object();
		Object(string name, float weight);
		~Object();

		string getName();
		float getWeight();
		void setName(string name);
		void setWeight(float w);

		friend ostream& operator<< (ostream& os, Object object);

	private:
		string name;
		float weight;
};


#endif
