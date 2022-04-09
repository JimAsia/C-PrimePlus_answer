#include <iostream>
#include <cctype>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char str;
	cout << "please enter a character(@ is quit): ";
	while ((str = cin.get()) != '@')
	{
		if (isupper(str))
		{
			str = tolower(str);     // wrong cout << tolower(str);
		}
		if (islower(str))
		{
			str = toupper(str);
		}
		cout << str;
	}
	
	return 0;	
}
