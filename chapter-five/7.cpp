#include <iostream>
#include <string>
struct Car
{
	std::string Company;
	int year;	
};

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	int times;
	cout << "How many cars do you wish to catalog? ";
	cin >> times;
	cin.get();
	Car *car = new Car [times];
	for (int i = 0; i < times; i++)
	{
		cout << "Car #" << i+1 << ": " << endl;
		cout << "Please enter the make: ";
		getline(cin, (car+i)->Company);
		cout << "Please enter the year made: ";
		cin >> car[i].year;
		cin.get();
	}
	cout << "Here is your collection: \n";
	for (int i = 0; i < times; i++)
	{
		cout << car[i].year << " " << car[i].Company << endl;
	}
	return 0;
}
