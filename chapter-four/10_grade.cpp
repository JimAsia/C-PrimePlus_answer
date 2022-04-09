#include <iostream>
#include<array>

int main()
{
	using std::cout;
	using std::cin;
	std::array<int, 3> grade;
	double sum;
	double average;
	cout << "Enter your 3 times grade: \n";
	for (int i = 0; i < 3; i++)
	{
		cin >> grade[i];
		sum += grade[i];
	}
	average = sum / 3.0;
	cout << "The average is " << average << std::endl;
}
