#include <string>
#include <vector>

using namespace std;

namespace s{
	class students{
		private:
			static int counterID;
			int cID;
			string name;
			vector<int> grades;
	    public:
	    	students();
	    	~students();
	    	void setName(string name);
	    	string getName();
	    	void setGrade(int g);
	    	float getAverage();
	    	void showAverage();
	    	string toString();
	};
}
