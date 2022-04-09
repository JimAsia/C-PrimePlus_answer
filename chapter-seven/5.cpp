#include <iostream>
using namespace std;
int Factorial(int n);

int main()
{
	int n, sum;
	while (1)
	{
		cout << "Please enter a number(input non-digital to quit): ";
		cin >> n;
		if (!cin)
		{
			cout << "Not right, no negative.";
			break;
		}
		else if (n < 0)
		{
			cout << "No negative value." << endl;
			continue;
		}
		else
		{
			sum = Factorial(n);
			cout << n << "! = " << sum << endl;
		}
	}
	return 0;
}

int Factorial(int n)
{
	int sum;
	if (n == 0)
	{
		sum = 1;
	}
	else
	{
		sum = n * Factorial(n - 1);
	}
	return sum;
}
