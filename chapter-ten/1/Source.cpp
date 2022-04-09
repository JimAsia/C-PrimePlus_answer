#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
class Account
{
private:
	std::string name;
	std::string ID;
	double savings;

public:
	Account();
	Account(std::string n, std::string id, double s);
	void Show() const;
	double Push(double s);
	double Pop(double s);
};

Account::Account()
{
	cout << "Default account: \n";
	name = "None";
	ID = "000000";
	savings = 0;
}

Account::Account(std::string n, std::string id, double s)
{
	name = n;
	ID = id;
	savings = s;
}

void Account::Show() const
{
	cout << "Your name is " << name << endl;
	cout << "Your ID is " << ID << endl;
	cout << "Your savings is " << savings << endl;

}

double Account::Push(double s)
{
	savings += s;
	return savings;
}

double Account::Pop(double s)
{
	savings -= s;
	return savings;
}

int main()
{
	Account a1;
	a1.Show();
	cout << endl;
	Account a2 ("Niko", "111111", 50000);
	a2.Show();
	a2.Pop(200);
	a2.Show();
	a2.Push(300);
	a2.Show();
	/*
	Account a3;
	std::string N, I;
	double M = 0;
	cout << "What's your account name: ";
	*/

	return 0;
}