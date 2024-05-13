#include <iostream>
#include <string>
#define add ((operandone)+(operandtwo))
using namespace std;
class a{};
template<typename t>
t add(t operandone, t operandtwo)
{
	return operandone + operandtwo;
}

int main()
{
	int result = add<int>(100, 200);
	cout << add(100, 200) << endl;
	cout << result << endl;
	string strresult = add<string>("hi", "hello");
	cout << strresult << endl;
	return 0;
	//a obj1;
	//a obj2;
	//a obj3 = add<a>(obj1, obj2); this doesn't work as the classasearches for + operator overloading.
}