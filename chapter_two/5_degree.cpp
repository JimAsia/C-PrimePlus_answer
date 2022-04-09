#include <iostream>

double getFahrenheit(double Celsius);

int main()
{
	double degree, F;
	std::cout << "Please enter a Celsius value: ";
	std::cin >> degree;
	F = getFahrenheit(degree);
	std::cout << degree << " degrees Celsius is " << F << " degrees Fahrenheit.\n";
	
	return 0;
}

double getFahrenheit(double Celsius)
{
	return Celsius * 1.8 + 32.0;
}
