#include <iostream>
#include <cctype>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char choice;
	cout << "Please enter one of the following choices: \n";
	cout << "c) carnivore p) pianist\n";
	cout << "t) tree g) game\n";
	choice = cin.get();
	while (isalpha(choice))                     // isalpha() function is important
	{
		switch (choice)
		{
			case 'c': cout << "a maple is not a carnivore."; break;
			case 'p': cout << "a maple is not a pianist."; break;
			case 't': cout << "a maple is a tree."; break;
			case 'g': cout << "a maple is not a game."; break;
			default: cout << "Please enter a c, p, t, or g: "; cin.ignore();
			// cin.ignore() ������(cin)����ȡ�ַ�, ��ȡ���ַ�������(ignore), Ĭ�ϲ���Ϊ1	
		}
		cin.get(choice);
	}
	return 0;	
}
