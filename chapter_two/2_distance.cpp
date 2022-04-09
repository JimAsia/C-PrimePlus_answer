#include <iostream>

int main()
{
	long distance, yard;
	std::cout << "Enter your distance: ";
	std::cin >> distance;
	yard = 220 * distance;
	std::cout << "Distance tranfer to yard: " << yard << std::endl;
	return 0;
}
