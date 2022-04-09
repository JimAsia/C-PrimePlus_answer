#include <iostream>
using namespace std;
#include <cstring>      // for strlen(), strcpy()
struct stringy {
	char * str;
	int ct;
};

void set(stringy& stri, char *test);
void show(stringy& stri, int n = 1);
void show(char* str2, const int n = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it uesd to be.";
	
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy& stri, char *test)
{
	stri.ct = strlen(test);
	stri.str = new char[stri.ct+1];
	strcpy_s(stri.str, stri.ct+1, test);
	
}

void show(stringy& stri, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << stri.str << endl;
	}
}

void show(char* str2, const int n = 1)
{
	for (int i = 0; i < n; i++)
		cout << str2 << endl;		
}
