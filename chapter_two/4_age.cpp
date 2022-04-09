#include<iostream>

int main()
{
	int age, months;
	std::cout << "Enter your age: ";
	std::cin >> age;
	months = age * 12;
	std::cout << "Your age in months is " << months << ".\n";
	
	return 0;
}
