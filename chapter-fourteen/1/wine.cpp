#include <iostream>
#include <string>
#include "wine.h"
using std::cout;
using std::cin;
using std::endl;
Wine::Wine()
{
	label = "None";
	year = 0;
	years_bolltes.first() = { 0 };
	years_bolltes.second() = { 0 };
}

Wine::Wine(const char* l, int y, const int ye[], const int bot[])
	:label(l), year(y)
{
		years_bolltes.first() = ArrayInt(ye, year);
		years_bolltes.second() = ArrayInt(bot, year);

}

Wine::Wine(const char* l, int y): label(l), year(y)
{
}

void Wine::GetBottles()
{
	int* yrs = new int[year];
	int* botl = new int[year];
	cout << "Enter " << label << " data for " << year << " year(s): " << endl;
	for (int i = 0; i < year; i++)
	{
		cout << "Enter year: ";
		cin >> yrs[i];
		cout << "Enter bottles for that year: ";
		cin >> botl[i];
	}
	years_bolltes.first() = ArrayInt(yrs, year);
	years_bolltes.second() = ArrayInt(botl, year);
	delete[] yrs;
	delete[] botl;
}

void Wine::Show() const
{
	std::cout << "Wine: " << label << std::endl;
	std::cout << "\t\tYear\tBottles\n";
	for (int i = 0; i < year; i++)
	{
		std::cout << "\t\t" << years_bolltes.first()[i]
			<< "\t" << years_bolltes.second()[i] << std::endl;
	}


}

std::string& Wine::Label()
{
	return label;
}

int Wine::sum()
{
	int s = 0;
	for (int i = 0; i < year; i++)
	{
		s += years_bolltes.second()[i];
	}
	return s;
}