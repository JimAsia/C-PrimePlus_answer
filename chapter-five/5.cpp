#include <iostream>
#include <string>

int main()
{
	using std::cout;
	using std::cin;
	std::string month[12] = {"Mon", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sale[12], sum;
	for (int i = 0; i < 12; i++)
	{
		cout << month[i] << ": ";
		cin >> sale[i];
		sum += sale[i];
	}
	cout << "Quantity of sale: " << sum << std::endl;
	
	return 0;
}
