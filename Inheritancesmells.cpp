#include <string>
using namespace std;
//Laptop class should be used but not instantiated.
class Laptop {
protected:
	Laptop();
private:
	string modelName;
	string serialNumber;
	string color;
	float weight;
	string hostOsType;
	int storageCapacity;



};
//compile time relationship/static relationship
class HPLaptop:public Laptop
{
private:

};
class ZeLaptop
{
	

};
class LenovoLaptop
{

};

int main()
{
	return 0;
}