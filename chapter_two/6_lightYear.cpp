#include <iostream>

double lightYear(double lightyear);

int main()
{
	double distance, L;
	std::cout << "Enter the number of light year: ";
	std::cin >> distance;
	L = lightYear(distance);
	std::cout << distance << " light years = " << L << " astronomical units.\n";
	
	return 0;
}

double lightYear(double lightyear)
{
	return lightyear * 63240;
}
