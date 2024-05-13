// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class A {
public:
	A() { cout << "A constructor" << endl; }
	virtual ~A() { cout << "A Destructor" << endl; }
	virtual void M1() { cout << "A.M1()" << endl; }
	void M2() { cout << "A.M2()" << endl; }
};
class B :public A {
public:
	B() { cout << "B constructor" << endl; }
	~B() { cout << "B Destructor" << endl; }
	void M1() override final { cout << "B.M1()" << endl; }
	void M2() { cout << "B.M2()" << endl; }
	virtual void M3() { cout << "B.M3()" << endl; }
	void M4() { cout << "B.M4" << endl; }
};
class C :public B {
public:
	C() { cout << "C constructor" << endl; }
	~C() { cout << "C Destructor" << endl; }
	//void M1() { cout << "C.M1()" << endl; }
	void M3() override { cout << "C.M3()" << endl; }
	void M4() { cout << "C.M4()" << endl; }
};

void allocate(){
  A * aPtr = new C();
  delete aPtr;

}

int main() {
	allocate();
	//A aobj;
	//B bobj;
	//C cobj;

	//A* aPtr = &cobj;
	//aPtr = &bobj;
	//aPtr = &cobj;
	//A aObj;
	//A* aPtr = &aObj;
	//aPtr->M1();   //virtual (A.M1)
	////aPtr->M2();   // Non virtual

	//B bObj;
	//B* bPtr = &bObj;
	//bPtr->M1();  //Virtual (B.M1)
	////bPtr->M2();  //Non virtual
	//bPtr->M3();  //Virtual (B.M3)
	////bPtr->M4();  // N.V.C

	//aPtr = &bObj;
	//aPtr->M1(); //V (B.M1)
	////aPtr->M2(); // NV 

	//C cObj;
	//cObj.M1(); //Virtual (C.M1)
	////cObj.M2(); // NV
	//cObj.M3(); // vIRTUAL(C.M3)
	////cObj.M4(); //NV 

	//aPtr = &cObj; 
	//aPtr->M1(); //V (C.M1)
	////aPtr->M2(); //NV 

	//bPtr = &cObj;
	//bPtr->M1();  //V (C.M1)
	////bPtr->M2();  //NV 
	//bPtr->M3();  //V (C.M3)
	////bPtr->M4();  //NV


	return 0;
}