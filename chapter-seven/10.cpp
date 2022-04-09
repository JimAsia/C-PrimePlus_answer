#include <iostream>

double add(double x, double y);
double sub(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));


int main()
{
	using namespace std;
	double n, m, sum, subs;

	while (1)
	{
		cout << "enter q to quit(enter other character to continue) ";
		cout << "\nenter two numbers: ";
		cin >> n >> m;
		if (!cin)
		{
			cout << "\nDone!";
			break;
		}
		sum = calculate(n, m, add);
		subs = calculate(n, m, sub);
		cout << "The two numbers' sum are " << sum << endl;
		cout << "The two numbers' sub are " << subs << endl;
	}
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double calculate(double x, double y, double (*pf)(double x, double y))
{
	double sum;
	sum = (*pf)(x, y);
	return sum;
}

