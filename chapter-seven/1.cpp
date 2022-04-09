#include <iostream>

double HarMonic(double a, double b);

int main()
{
	using std::cout;
	using std::cin;
	
	double x, y, Haver;
	
	cout << "Please enter two number(0 to quit): ";
	while((cin >> x >> y) && x != 0 && y != 0)
	{
		Haver = HarMonic(x, y);
		cout << x << " and " << y << " harmonic average is " << Haver << std::endl;
	}
	cout << "Done!";
	return 0;
}

double HarMonic(double a, double b)
{
	return 2 * a * b / (a + b);
}
