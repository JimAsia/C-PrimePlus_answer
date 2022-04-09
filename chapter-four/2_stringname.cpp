#include <iostream>
#include <string>
int main()
{
	using std::cout;
	using std::cin;
	using std::string;
	string first_name;
	string last_name;
	char grade;
	int age;
	cout << "What is your first name? ";
	std::getline(cin, first_name);
	cout << "What is your last name? ";
	std::getline(cin, last_name);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	grade = grade + 1;
	cout << "Name: " << last_name << ", " << first_name << std::endl;
	cout << "Grade: " << grade << std::endl;
	cout << "Age: " << age << std::endl;
	return 0;
}
