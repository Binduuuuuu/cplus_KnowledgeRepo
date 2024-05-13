#include <iostream>
#include <vector>
#include<initializer_list>

using namespace std;
class ErrorInfo {
public:
    string methodName;
    int lineNumber;
    string message;

};
int divide(int numerator, int divisor)
{
    cout << "divide Begin" << endl;
    int result;
    if (divisor <= 0)
    {
        ErrorInfo errorDetails;
        errorDetails.methodName = "Divfun";
        errorDetails.lineNumber = 13;
        errorDetails.message = "Divisor Value cannot be zero or negative";
        throw errorDetails;
    }
    result = numerator / divisor;

    cout << "divide end" << endl;
    return result;
}
void init()
{
    cout << "init Begin" << endl;
    try {
        int result = divide(10, 0);
        cout << "init end" << result << endl;
    }
    catch (ErrorInfo obj)
    {
        cout << "methodname" << obj.methodName << endl;
        cout << "lineNumber" << obj.lineNumber << endl;
        cout << "message" << obj.message << endl;
    }
}

int main()
{
    cout << "Main Begin" << endl;
    init();
    cout << "Main End" << endl;
    // try{

    // }
}