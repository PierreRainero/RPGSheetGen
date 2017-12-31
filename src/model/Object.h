using std::ostream;
using std::string;

class Object{
	public:
		Object();
		Object(string name, float weight);
		~Object();

		string getName();
		float getWeight();

	private:
		string name;
		float weight;
};