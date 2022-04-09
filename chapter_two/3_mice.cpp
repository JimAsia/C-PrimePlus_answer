#include <iostream>

void mice();
void run();

int main()
{
	for (int i = 0; i < 2; i++)
	{
		mice();
	}
	for (int i = 0; i < 2; i++)
	{
		run();
	}
	
	return 0;
}

void mice()
{
	std::cout << "Three blind mice\n";
}
void run()
{
	std::cout << "See how they run\n";
}
