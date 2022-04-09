#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int rows;
	cout << "Please enter a number of rows: ";
	cin >> rows;
	for (int i = 0; i < rows + 1; i++)
	{
		for (int j = i; j < rows; j++)
		{
			cout << ".";
		}
		for (int k = 1; k < i+1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
