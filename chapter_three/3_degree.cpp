#include <iostream>

double getDegrees(double d, double m, double s);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	double degrees, degree,	minutes, sceonds;
	cout << "Enter a latitude in degrees, minutes, and sceonds: \n";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sceonds;
	degree = getDegrees(degrees, minutes, sceonds);
	cout << degrees << " degrees, " << minutes << " minutes, " << sceonds << " seconds, = " << degree << " degrees\n";
	
	return 0;  
}

double getDegrees(double d, double m, double s)
{
	return d + m / 60.0 + s / 3600.0;
}
