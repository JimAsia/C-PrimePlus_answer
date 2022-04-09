#include <iostream>
#include <cstring>
#include "golf.h"
using std::cin;
using std::cout;
using std::endl;

void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	cout << "enter the golf player name(enter blank to quit): ";
	cin.getline(g.fullname, Len);
	if (strcmp(g.fullname, " ") == 0)                // strcmp
	{
		cout << "Done!";
		return 0;
	}
	cout << "enter the golf player handicap: ";
	cin >> g.handicap;
	cin.get();
	return 1;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	cout << "enter the golf player name: " << g.fullname << endl;
	cout << "enter the golf player handicap: " << g.handicap << endl;
}