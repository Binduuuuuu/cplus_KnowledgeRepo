//Telescopic constructer chain - Functional overloading
#include <iostream>
#include <string>
using namespace std;
class Customer {
private:
    string name, address,pan, adhar, emailid, contactNumber;
public:
    Customer(string nameArg,
        string addressArg, 
        string panArg, 
        string adharArg
    ) :name{ nameArg }, address{ addressArg },pan{ panArg },adhar { adharArg }
        {

          // this->name=nameArg; // Avoid
        }
  //  Customer(string nameArg,
    //    string addressArg,
      //  string panArg,
        //string adharArg,
       // string contactNumberArg
   // ) :name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg }, contactNumber{ contactNumberArg } {

    //} Instead of commented class we can create separate function to optional parameters as shown below
    void setContactNumber(string contactNumberArg)
    {
        this ->contactNumber = contactNumberArg;
     }
    void setemailid(string emailidArg)
    {
        this->emailid = emailidArg;
    }

};
class CustomerBuilder
{

};
int main()
{
    Customer customerObj{ "Tom","BLR","JFKN","231534158" };
   // Customer customerObj1{ "Tom","BLR","JFKN","231534158","2354136412"};
    return 0;

}