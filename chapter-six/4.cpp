#include <iostream>
const int strsize = 20;

struct bop {
	char fullname[strsize];   // real name
	char title[strsize]; // job title
	char bopname[strsize];   // secret BOP name
	int preference;          // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\t";
    cout << "b. display by title\n";
    cout << "c. display by bopname\t";
    cout << "d. display by preference\n";
    cout << "q. quit\n";

	return 0;	
}
