#include <iostream>

template <typename T>            // template A
void ShowArray(T arr[], int n);

template <typename T>            // template B
void ShowArray(T* arr[], int n);

template <typename T>
T SumArray(T* arr[], int n);

template <typename T>
T SumArray(T arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = { 13, 31, 103, 301, 310, 130 };
    int sum1, sum2;
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double* pd[3];

    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:\n";
    // things is an array of int
    ShowArray(things, 6);  // uses template A
    cout << "Listing Mr. E's debts:\n";
    // pd is an array of pointers to double
    ShowArray(pd, 3);      // uses template B (more specialized)
    // cin.get();
    sum1 = SumArray(things, 6);
    sum2 = SumArray(pd, 3);
    cout << "template C\n";
    cout << "Mr. E's counts of things' sum are " << sum1 << endl;
    cout << "template D\n";
    cout << "Mr. E's debts' sum are " << sum2 << endl;
    cin.get();
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "template A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
void ShowArray(T* arr[], int n)
{
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;
}

template <typename T>
T SumArray(T* arr[], int n)
{
    using namespace std;
    // cout << "template D\n";
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *arr[i];
    }

    return sum;
}

template <typename T>
T SumArray(T arr[], int n)
{
    using namespace std;
    // cout << "template C\n";
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}