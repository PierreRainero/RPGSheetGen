#ifndef CLASS_H
#define CLASS_H

using std::fstream;

using std::string;

class Class{
	public:
		Class();
		Class(string name);
		~Class();

		string getName();
		void setName(string name);

	private:
		string name;
};

#endif
