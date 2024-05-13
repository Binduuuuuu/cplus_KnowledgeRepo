//Design pattern: Stratergy pattern

#include <iostream>
using namespace std;
class TextBox {
public:
    virtual void accept(string Text) { cout << "TextBox Accept" << endl; }
};

class NumricTextbox : public TextBox {

public:
    void accept(string Text) override { cout << "Numeric TextBox Accept" << endl; }

};
class MaskedTextbox : public TextBox {

public:
    void accept(string Text) final override { cout << "Masked TextBox Accept" << endl; }

};


int main()
{
    TextBox obj;
    obj.accept("Tom");

    NumricTextbox age;
    age.accept("25");

    TextBox* baseptr = &age;   //Base ptr accept function will only be called never calls derived class even though address is given.
    baseptr->accept("35");

    MaskedTextbox phoneNumber;
    baseptr = &phoneNumber;

    baseptr->accept("953551546");
    return 0;

}
