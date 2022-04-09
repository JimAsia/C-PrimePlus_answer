#include <iostream>

struct CandyBar
{
	char brand[20];
	double weight;
	int calorie;
};


int main()
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	std::cout << "Barnd: " << snack.brand << std::endl 
	<< "Weight: " << snack.weight << std::endl 
	<< "Calorie: " << snack.calorie << std::endl;
	
	return 0;
}
