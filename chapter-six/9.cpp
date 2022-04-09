#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 20;

struct Subscriber {
	std::string name = "none";
	double donation;
};

int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	
	int num;
	cout << "Please enter the number of subscriber: ";
	inFile >> num;
	Subscriber *Sub = new Subscriber [num];
	inFile.get();
	
	for (int i = 0; i < num; i++)
	{
		cout << "Enter subscriber's name: ";
		getline(inFile, Sub[i].name);
		cout << "Enter subscriber's donation: ";
		inFile >> Sub[i].donation;
		inFile.get();
	}
	for (int i = 0; i < num; i++)
	{
		cout << "Grand Patrons" << endl;
		if (Sub[i].donation > 10000)
		{
			cout << "More than 10000: ";
			cout << "Name: " << Sub[i].name << endl;
			cout << "Donation:" << Sub[i].donation << endl;
		}
		else 
		{
			cout << "\nLess than 10000: ";
			cout << "Name: " << Sub[i].name << endl;
			cout << "Donation:" << Sub[i].donation << endl;
		}
	}
	delete [] Sub;
	return 0;	
}	
