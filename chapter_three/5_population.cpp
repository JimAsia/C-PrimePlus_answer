#include <iostream>


int main()
{
	using std::cout;
	using std::cin;
	long long w_p, us_p;
	double percentage;
	cout << "Enter the world's population: ";
	cin >> w_p;
	cout << "Enther the population of the US: ";
	cin >> us_p;
	percentage = double(us_p) / double(w_p) * 100;
	cout << "The population of the US is " << percentage << "% of the world population.\n";
	
	return 0;
}

