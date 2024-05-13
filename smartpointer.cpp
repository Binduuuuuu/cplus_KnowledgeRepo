// Online C++ compiler to run C++ program online
#include <iostream>
#include <memory>
using namespace std;
class A {
public:
    A() {
        cout << "A instantiated" << endl;
    }
    ~A() {
        cout << "A destructed" << endl;
    }
    void operation()
    {
        cout << "A operation Called " << endl;
    }

};
template<typename T>
class SmartPointerOfAnytype {
    T* ptr;
public:
    SmartPointerOfAnytype(T* ptrRef) :ptr(ptrRef) {}
    ~SmartPointerOfAnytype()
    {
        delete ptr;
    }
    T* operator ->()
    {
        return ptr;
    }
};

void instantiate() {
    // SmartPointerOfAnytype<A> smartPtr{new A()};
    // smartPtr -> operation();
    unique_ptr<A> newSmartptr = make_unique<A>();
    newSmartptr->operation();

}
int main(){
    instantiate();

    return 0;
}