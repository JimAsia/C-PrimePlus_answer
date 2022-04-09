#include <iostream>

const int Seasons = 4;
const char *ch[Seasons] = {"Spring", "Summer", "Fall", "Winter"};    // double 

void fill(double *expenses);
void show(double *expenses);
int main()
{
    double expenses[4];
    
    fill(expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(double *expenses)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << ch[i] << " expenses: ";
        std::cin >> expenses[i];
    }
}

void show(double *expenses)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << ch[i] << ": $" << expenses[i] << '\n';
        total += expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}
