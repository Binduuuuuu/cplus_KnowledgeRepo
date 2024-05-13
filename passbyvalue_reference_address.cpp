#include <iostream>
using namespace std;
void f3(string& arg)
{
    arg = "Hello Reference";
}
void f2(string* arg)
{
    *arg = "hello1";
}
void f1(string arg)
{
    arg = "hello";
}
int main()
{
    string data = "hi";
    f1(data);
    cout << data << endl;
    f2(&data);
    cout << data << endl;
    f3(data);
    cout << data << endl;
    return 0;
}