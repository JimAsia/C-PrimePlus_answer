//arrobj.cpp -- functions with array objects
#include <iostream>

const int Seasons = 4;
const char* Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};

struct Exp
{
	double expenses;
};

void fill(Exp* pa);
void show(Exp* da);
int main()
{
    Exp expenses[Seasons];
    fill(expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(Exp* pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i].expenses;
    }
}

void show(Exp* da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da[i].expenses << '\n';
        total += da[i].expenses;
    }
    std::cout << "Total: $" << total << '\n';
}
