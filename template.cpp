#include <iostream>
#include <string>
using namespace std;
//template method pattern & part of implementation is given by derived class
class Vehicle {
private:
	string regNumber;
	string name;
public:
	virtual void start() { cout << "Key start" << endl; }
	virtual void stop() { cout << "Key stop" << endl; }
	virtual void drive()= 0;
};
class car: public Vehicle{
public:
	void start() { cout << "Key start" << endl; }
	void stop() { cout << "Key stop" << endl; }
	void drive()
	{
		cout << "Car Drive" << endl;
	}
};
class truck: public Vehicle {
public:
	void drive()
	{
		cout << "Truck Drive" << endl;
	}
};

class VehicleSimulator {
	Vehicle* v;
public:
	VehicleSimulator(Vehicle* vArg) :v{ vArg } {};
	void start() { v->start(); }
	void stop() { v->stop(); }
	void drive() { v->drive(); }

};

int main()
{
	car vehicle;
	VehicleSimulator simulator(&vehicle);
	simulator.start();
	simulator.stop();
	simulator.drive();

	truck vehicle1;
	VehicleSimulator simulator1(&vehicle1);
	simulator1.start();
	simulator1.stop();
	simulator1.drive();

	return 0;
}