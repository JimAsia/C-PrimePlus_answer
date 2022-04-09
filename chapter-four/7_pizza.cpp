#include <iostream>

struct PizzaBar
{
	char brand[20];
	double weight;
	double diameter;
};


int main()
{
	PizzaBar snack;
	std::cout << "Please enter your candy information: \n";
	std::cout << "Barnd: ";
	std::cin.getline(snack.brand, 20);
	std::cout << "Weight: ";
	std::cin >> snack.weight;
	std::cout << "Diameter: ";
	std::cin >> snack.diameter; 
	std::cout << "Your candy information: \n";
	std::cout << "Barnd: " << snack.brand << std::endl 
	<< "Weight: " << snack.weight << std::endl 
	<< "Diameter: " << snack.diameter << std::endl;
	
	return 0;
}
