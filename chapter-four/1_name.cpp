#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	const int LIMIT = 20;
	char first_name[LIMIT];
	char last_name[LIMIT];
	char grade;
	int age;
	cout << "What is your first name? ";
	cin.getline(first_name, LIMIT);
	cout << "What is your last name? ";
	cin.getline(last_name, LIMIT);
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
