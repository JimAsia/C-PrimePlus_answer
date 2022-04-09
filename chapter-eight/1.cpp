#include <iostream>
#include <string>
using namespace std;
inline void Show(string str, int n) { cout << str << endl; }

int main()
{
	string s;
	cout << "Enter your string: ";
	getline(cin, s);
	for (int i = 0; i < 5; i++)
	{
		Show(s, i);
	}
	
	return 0;
}
