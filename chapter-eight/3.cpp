#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string Top(string& str);

int main()
{
	string s;
	cout << "Enter a string (q to quit): ";
	getline(cin, s);
	while (s != "q")
	{
		s = Top(s);
		cout << s << endl;
		cout << "Next string (q to quit): ";
		getline(cin, s);
	}
	cout << "Bye.\n";
	return 0;
}

string Top(string& str)
{
	for (int i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
		
	return str;
}
