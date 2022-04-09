#include <iostream>
#include <cstring>
#include "golf.h"
using std::cin;
using std::cout;
using std::endl;

golf::golf(const char* name, int hc)
{
	strcpy_s(fullname, Len, name);
	handicap = hc;
}

int golf::setgolf()
{
	cout << "enter the golf player name(enter blank to quit): ";
	cin.getline(fullname, Len);
	if (strcmp(fullname, " ") == 0)                // strcmp
	{
		cout << "Done!";
		return 0;
	}
	cout << "enter the golf player handicap: ";
	cin >> handicap;
	cin.get();
	return 1;
}

void golf::handicapz(int hc)
{
	handicap = hc;
}

void golf::showgolf()
{
	cout << "enter the golf player name: " << fullname << endl;
	cout << "enter the golf player handicap: " << handicap << endl;
}