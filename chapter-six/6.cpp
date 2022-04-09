#include <iostream>
#include <string>
struct Subscriber {
	std::string name = "none";
	double donation;
};

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int num;
	std::string max_name;
	cout << "Please enter the number of subscriber: ";
	cin >> num;
	Subscriber *Sub = new Subscriber [num];
	cin.get();
	
	for (int i = 0; i < num; i++)
	{
		cout << "Enter subscriber's name: ";
		getline(cin, Sub[i].name);
		cout << "Enter subscriber's donation: ";
		cin >> Sub[i].donation;
		cin.get();
	}
	for (int i = 0; i < num; i++)
	{
		cout << "Grand Patrons" << endl;
		if (Sub[i].donation > 10000)
		{
			cout << "More than 10000: ";
			cout << "Name: " << Sub[i].name << endl;
			cout << "Donation:" << Sub[i].donation << endl;
		}
		else 
		{
			cout << "\nLess than 10000: ";
			cout << "Name: " << Sub[i].name << endl;
			cout << "Donation:" << Sub[i].donation << endl;
		}
	}
	delete [] Sub;
	return 0;	
}
