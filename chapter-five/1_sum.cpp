#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int num1, num2, sum;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	for (int i = num1; i <= num2; i++)
		sum += i;
	cout << num1 << " ~ " << num2 << ": " << sum;
	return 0;
}
