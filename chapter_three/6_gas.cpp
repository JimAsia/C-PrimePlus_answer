#include <iostream>
#include <string>
int main()
{
	using std::cout;
	using std::cin;
	
	double mileage, gas;
	std::string answer;
	/*
	cout << "Please enter driving mileage: ";
	cin >> mileage;
	cout << "Please enter consumption of gasoline: ";
	cin >> gas;
	*/
	cout << "Do you want enter another ways(Y/N): ";
	cin >> answer;
	
	if (answer == "Y")
	{
		cout << "mile: ";
		cin >> mileage;
		cout << "litre: ";
		cin >> gas; 
		cout << mileage / (gas * 100)  << std::endl;
	}
	else
	{
		cout << "Done!" << std::endl;
	}
	
	
	return 0; 
}
