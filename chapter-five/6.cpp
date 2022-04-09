#include <iostream>
const int year = 3;
const int month = 12;

int main()
{
	int sale[year][month], sum, num;
	for (int i = 0; i < year; i++)
		for (int j = 0; j < month; j++)
		{
			std::cout << i+1 << " year, " << j+1 << " month sale: ";
			std::cin >> num;
			sale[i][j] = num;
			sum += sale[i][j];
		}
	std::cout << "Quantity of sale: " << sum << std::endl;
	
	return 0;
}
