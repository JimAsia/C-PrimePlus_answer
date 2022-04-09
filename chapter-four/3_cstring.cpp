#include <iostream>
#include <cstring>

int main()
{
	using std::cout;
	using std::cin;
	char first_name[40];
	char second_name[40];
	
	cout << "Enter your first name: ";
	cin.getline(first_name, 20);
	cout << "Enter your second name: ";
	cin.getline(second_name, 20);
	strcat(second_name, ", ");
	strcat(second_name, first_name);
	
	cout << "Here's the information in a single string: " << second_name << std::endl;
	
	return 0;
}
