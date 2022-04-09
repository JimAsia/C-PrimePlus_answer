#include <iostream>
#include <cstring>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char word[80];
	cout << "Enter words (to stop, type the word done): ";
	cin >> word;
	int count = 0;
	
	while (strcmp(word, "done") != 0)
	{
		if (bool(cin >> word) == true)
			count++;
	}
	cout << endl << "You entered a total of " << count << " words." << endl;

	
	return 0;
}
