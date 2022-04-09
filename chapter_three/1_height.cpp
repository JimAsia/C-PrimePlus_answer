#include <iostream>

const int feet = 12;
double getFeet(double inch);	

int main()
{
	using std::cout;
	using std::cin;
	double h, w;
	cout << "Please enter your height and weight: \n";
	cout << "Your height(inch): ____\b\b\b\b";
	cin >> h;
	cout << "Your weight(kg): ____\b\b\b\b";
	cin >> w;
	cout << "There is your height(feet): " << getFeet(h) << std::endl;
	cout << "There is your weight(kg): " << w << std::endl;
	return 0;
}

double getFeet(double inch)
{
	return feet * inch;
}
