#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 80;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	int count = 0;
	char ch;                     // important
	inFile >> ch;				//
	while (inFile.good())        // 
	{
		count++;
		inFile >> ch;
	}
	/*
	if (inFile.eof())
	{
		cout << "End of file reached.\n";
	}
	else if (inFile.fail())
	{
		cout << "Input terminated by data mismatch.\n";
	}
	*/
	cout << "This file characters are: " << count << endl;
	return 0;	
}
