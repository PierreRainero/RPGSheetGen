using std::ostream;
using std::string;
using std::fstream;
using std::vector;

#include "Object.h"
#include "Character.h"

class Save{
	public:
		Save();
		Save(vector<Object> objtab, vector<Weapon> weapontab, vector<Clothe> clothetab, vector<Class> classtab, vector<string> charactab);
		~Save();
		
		vector<Object> readObjectstxt();
		void listObjects();
		void WriteObjectstxt();
		void setObjects(vector<Object> objtab);
		vector<Object> getObjects();
		
		vector<Weapon> readWeaponstxt();
		void listWeapons();
		void WriteWeaponstxt();
		void setWeapons(vector<Weapon> weapontab);
		vector<Weapon> getWeapons();
		
		vector<Clothe> readClothestxt();
		void listClothes();
		void WriteClothestxt();
		void setClothes(vector<Clothe> clothetab);
		vector<Clothe> getClothes();
		
		vector<Class> readClassestxt();
		void listclasses();
		void WriteClassestxt();
		void setClasses(vector<Class> classtab);
		vector<Class> getClasses();
		
		Character getCharacter(string character);
		vector<string> readcharacterstxt();
		void listCharacters();
		void Writecharacterstxt();
		void WriteCharactertxt(string character, Character charac);
		void setCharacters(vector<string> charactab);
		vector<string> getCharacters();
			
	private:
		vector<Object> objtab;
		vector<Weapon> weapontab;
		vector<Clothe> clothetab;
		vector<Class> classtab;
		vector<string> charactab;
};