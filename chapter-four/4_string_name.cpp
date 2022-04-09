#include <iostream>
#include <string>

int main()
{
	using std::cout;
	using std::cin;
	std::string first_name;
	std::string second_name;
	
	cout << "Enter your first name: ";
	std::getline(cin, first_name);
	cout << "Enter your second name: ";
	std::getline(cin, second_name);
	second_name = second_name + ", " + first_name;
	
	cout << "Here's the information in a single string: " << second_name << std::endl;
	
	return 0;
}
