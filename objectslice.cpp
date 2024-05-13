#include <iostream>
#include<string>
using namespace std;
//Summary: Base class pointer can store the address of derived class but cannot access the members of derived class & derived class cannot store the address of base class because inheritance is one way.
//Contract
class IEmployee {     //creating interface
	//Base class member function redefined in derived class to achieve polymorphism and for that reason we use word virtual
public:
	virtual void professional() = 0;

};

class IFamily {

public:
	virtual void casualbehaviour() = 0;
	virtual void cranky() = 0;
};
//Person fullfills(implements) IEmployee Contract
class Person: public IEmployee, public IFamily{
	//Default interface of the object
public:
	void casualbehaviour() {
		//cout << "casual" << endl;
	}
	void professional() {
		cout << "Professinal" << endl;

	}
	void cranky() {}
};

class officeContext {
public:
	void Enter(IEmployee* obj) {
		obj->professional();
	}
};

class FamilyContext {
public:
	void Enter(IFamily* obj) {
		obj->cranky();
		obj->casualbehaviour();
	}
};

int main()
{
	Person tom;
	FamilyContext fContext;
	officeContext oContext;
	fContext.Enter(&tom);
	oContext.Enter(&tom);

	return 0;
}