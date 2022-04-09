#include <iostream>

struct CandyBar
{
	char brand[20];
	double weight;
	int calorie;
};


int main()
{
	CandyBar snack;
	std::cout << "Please enter your candy information: \n";
	std::cout << "Barnd: ";
	std::cin.getline(snack.brand, 20);
	std::cout << "Weight: ";
	std::cin >> snack.weight;
	std::cout << "Calorie: ";
	std::cin >> snack.calorie; 
	std::cout << "Your candy information: \n";
	std::cout << "Barnd: " << snack.brand << std::endl 
	<< "Weight: " << snack.weight << std::endl 
	<< "Calorie: " << snack.calorie << std::endl;
	
	return 0;
}
