#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	double tvarps, tax;
	cout << "Please enter your tvarps: ";
	cin >> tvarps;
	while (tvarps >= 0 && cin.good())    // cin.good() or !(cin.fail())
	{
		if (0 <= tvarps && tvarps <= 5000)
		{
			tax = 0;
		}
		else if (5001 <= tvarps && tvarps <= 15000)
		{
			tax = (tvarps - 5000) * 0.1;
		}
		else if (15001.0 <= tvarps && tvarps <= 35000.0)
		{
			tax = 1000 + (tvarps - 15000) * 0.15;
		}
		else
		{
			tax = 1000 + 3000 + (tvarps - 35000) * 0.2;
		}
		cout << "Your tax is " << tax << endl;
		cout << "\nPlease enter your tvarps: ";
		cin >> tvarps;
	}
	cout << "Done!";
	return 0;	
}
