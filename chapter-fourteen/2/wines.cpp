#include <iostream>
#include <string>
#include "wines.h"
using std::cout;
using std::cin;
using std::endl;
Wine::Wine() : std::string("None"), PairArray()
{
	year = 0;
}

Wine::Wine(const char* l, int y, const int ye[], const int bot[])
	: std::string(l), year(y)
{
	PairArray::First() = ArrayInt(ye, year);
	PairArray::Second() = ArrayInt(bot, year);
}

Wine::Wine(const char* l, int y) : std::string(l), year(y)
{
}

void Wine::GetBottles()
{
	int* yrs = new int[year];
	int* botl = new int[year];
	//PairArray arr;
	cout << "Enter " << (const std::string&)(*this) << " data for " << year << " year(s): " << endl;
	for (int i = 0; i < year; i++)
	{
		cout << "Enter year: ";
		cin >> yrs[i];
		cout << "Enter bottles for that year: ";
		cin >> botl[i];
	}
	//arr.First() = ArrayInt(yrs, year);
	//arr.Second() = ArrayInt(botl, year);
	PairArray::First() = ArrayInt(yrs, year);
	PairArray::Second() = ArrayInt(botl, year);
	delete[] yrs;
	delete[] botl;
}

void Wine::Show() const
{
	std::cout << "Wine: " << (const std::string &)(*this) << std::endl;
	std::cout << "\t\tYear\tBottles\n";
	for (int i = 0; i < year; i++)
	{
		std::cout << "\t\t" << PairArray::First()[i]
			<< "\t" << PairArray::Second()[i] << std::endl;
	}


}

const std::string& Wine::Label()
{
	return (const std::string &)(*this);
}

int Wine::sum()
{
	int s = 0;
	for (int i = 0; i < year; i++)
	{
		s += PairArray::Second()[i];
	}
	return s;
}

/*
PairArray& Wine::operator=(PairArray(ArrayInt(), ArrayInt()))
{
	PairArray ar;
	ar.First() = PairArray::First();
	ar.Second() = PairArray::Second();
	return ar;
}
*/
