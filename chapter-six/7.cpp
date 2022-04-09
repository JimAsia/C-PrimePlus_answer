#include <iostream>
#include <string>
#include <cctype>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	std::string words;
	int count0 = 0, count1 = 0, count2 = 0;
	cout << "Enter words (q to quit): \n";
	cin >> words;
	while (words != "q")
	{
		if (isalpha(words[0]))
		{
			if(words[0] == 'a' || words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u')
			{
				count0++;
			}
			else
			{
				count1++;
			}		
		}
		else 
		{
			count2++;
		}
		cin >> words;
	}
	cout << count0 << " words beginning with vowels\n";
	cout << count1 << " words beginning with consonants\n";
	cout << count2 << " others\n";
	return 0;	
}
