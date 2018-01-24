#ifndef CLASS_H
#define CLASS_H
#include <iostream>

using std::ostream;
using std::string;

class Class{
	public:
		Class();
		Class(string name);
		~Class();

		string getName();

	private:
		string name;
};

#endif
