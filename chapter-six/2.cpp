#include <iostream>
#include <array>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	std::array<double, 10> donation;
	double sum, average, count;
	int temp;
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter N."<< i + 1 << " digit: ";
		cin >> donation[i];
		if (cin.fail())                         // cin.fail() wrong set
		{
			cout << "Please enter a digit.\n";
			break;
		}
		else
		{
			count++;
			sum += donation[i];
		}
	}
	average = sum / count;
	cout << "Average is " << average << endl;
	temp = 0;
	for (int i = 0; i < donation.size(); i++)
	{
		if (donation[i] > average)
			temp++;
	}
	cout << "Above average: " << temp << endl;
	return 0;	
}
