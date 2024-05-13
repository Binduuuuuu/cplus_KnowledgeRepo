#include <iostream>
#include <string>
using namespace std;



class Device {
public:
    string name;
    friend ostream& operator<<(ostream& os, const Device& d) {
        os << d.name;
        return os;
    }
};
template <typename T>
class Vector {
private:
    T items[3];
    T size;

public:
    Vector() : size(0) {}

    friend ostream& operator <<(ostream& out, const Vector& operand) {
      /*  for (int i = 0; i < operand.size; ++i)
        {
            out << " " << operand.items[i];
        }*/
        return out;
    }

    T operator [](T i)
    {
        return items[i];
    }


    void push_back(T item1)
    {
        //items[size] = item1;
        //++size;
    }
};



int main()
{
    // Vector obj;
    // obj.push_back(20);
    // cout<< obj <<endl;
    Vector <int>V;
    V.push_back(10);
    V.push_back(20);

    Vector <string>vs;
    vs.push_back("a10");
    vs.push_back("a20");

    //Vector <Device&> vd;
    //Device obj;
    //obj.name = "D1";
    //Device obj1;
    //obj.name = "D2";
    //vd.push_back(obj);
    //vd.push_back(obj1);

    cout << V;
   cout << vs;
    //cout << vd;

    return 0;


}