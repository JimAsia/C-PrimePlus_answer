#include <iostream>
#include <string>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	std::string words;
	cout << "Enter words (to stop, type the word done): ";
	cin >> words;
	int count = 0;
	
	while (words != "done")
	{
		if (bool(cin >> words) == true) 
			count++;
	}
	cout << endl << "You entered a total of " << count << " words." << endl;

	
	return 0;
}
