#include <iostream>

struct PizzaBar
{
	char brand[20];
	double weight;
	double diameter;
};


int main()
{
	PizzaBar *snack = new PizzaBar[3];;
	std::cout << "Please enter your candy information: \n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Barnd: ";
		std::cin.getline(snack[i].brand, 20);                   // (snack+i)->brand, snack[i].brand
		std::cout << "Weight: ";
		std::cin >> snack[i].weight;
		std::cout << "Diameter: ";
		std::cin >> snack[i].diameter;
		std::cin.get(); 
		std::cout << "Your candy information: \n";
		std::cout << "Barnd: " << snack[i].brand << std::endl 
				<< "Weight: " << snack[i].weight << std::endl 
				<< "Diameter: " << snack[i].diameter << std::endl;
	}
	delete [] snack;
	return 0;
}
