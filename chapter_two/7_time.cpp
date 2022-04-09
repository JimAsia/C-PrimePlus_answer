#include <iostream>

void Show(int h, int m);

int main()
{
	int hours, minute;
	std::cout << "Enter the number of hours: ";
	std::cin >> hours;
	std::cout << "Enter the number of minutes: ";
	std::cin >> minute;
	Show(hours, minute);
	return 0;
}

void Show(int h, int m)
{
	std::cout << "Time: " << h << ":" << m << std::endl;
}
