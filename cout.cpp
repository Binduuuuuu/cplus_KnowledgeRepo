#include <iostream>
#include <string>
using namespace std;
class bankaccount {
private:
	int balance;
public:
	bankaccount(int initbalance):balance{ initbalance }{}
	int getbalance()const {
		return this->balance;
	}
	bankaccount operator + (const bankaccount& operandTwo)const {
		bankaccount newAccount{ 0 };
		newAccount.balance = this->balance + operandTwo.getbalance();
		return newAccount;

	}

	friend ostream& operator <<(ostream& out, const bankaccount& operandTwo)
	{
		out << "Current Balance is " << operandTwo.balance;
		return out;
    }
};

int main()
{
	//bankaccount acc1{ 1000 };
	//bankaccount acc2{ 2000 };
	//cout << acc1.getbalance() << endl;
	//cout << acc2.getbalance() << endl;
	//bankaccount acc3 = acc1 + acc2;
	//cout << acc3.getbalance() << endl;
	///*cout << acc3;*/
	bankaccount acc1{ 1000 };
	bankaccount acc2{ 2000 };
	// 	cout << acc1.getbalance() << endl;
	// 	cout << acc2.getbalance() << endl;

	cout << acc1 << endl;
	cout << acc2 << endl;
	bankaccount acc3 = acc1 + acc2;
	cout << acc3 << endl;
	return 0;


}