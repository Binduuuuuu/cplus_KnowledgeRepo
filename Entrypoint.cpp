#include <string>
#include <iostream>
using namespace std;

class LocationModel { //pascel case
private:
	string name;
	float coOrdinates; // camel case
	static int counter;
public:
	static void dumpcounter(){}
//Internally compiler gives a input string getName(LocationModel *this)
	string getName()
	{
		//return this->name;
		return name;
	}
//Internally compiler gives a input string setName(LocationModel *this, string value)
	void setName(string value)
	{
		//this->name = value;
		name = value;
	}
};

class Converter {
public:
	void convert(string filepath)
	{

	}

};


int main()
{
	//Converter obj;
	//obj.convert("Converted to xml");
	
	//Stack allocation
		LocationModel obj;
		obj.setName("BLR"); //LocationModel::setModel(&obj,"BLR");
		string output = obj.getName();
		cout << output <<endl;
	//Heap allocation
		LocationModel *ptr= new LocationModel();
		ptr->setName("DEL");
		string output1 = ptr->getName();
		cout << output1 << endl;
		LocationModel::dumpcounter();

	return 0;
}