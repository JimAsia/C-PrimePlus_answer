#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	double num, sum;
	cout << "Please enter a number(enter 0 shut down this programme): ";
	cin >> num;
	while (num != 0)
	{
		sum += num;
		cout << "The sum of number is " << sum << std::endl;
		cout << "\nPlease enter a number(enter 0 shut down this programme): ";
		cin >> num;
			
	}
	cout << "\nThe sum of number is " << sum << std::endl;
	return 0;
}
