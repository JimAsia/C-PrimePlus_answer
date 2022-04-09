#include <iostream>
#include <cctype>
#include <string>
using namespace std;
const int n = 5;
template<class T>
T maxn(T* arr, int m);
template <> string maxn(string* arr, int m);
int main()
{
	int max1;
	double max2;
	string max3;
	int* a1 = new int[n] {1, 2, 3, 4, 5};
	double* a2 = new double[n] {1.1, 2.2, 3.3, 4.4, 5.5};
	//const char* ch1[5] = {"niko", "hunter", "jackz", "monesy", "alseibk"};
	//const char** ch1 = new const char* [n] {"niko", "hunter", "jackz", "monesy", "alseibk"};
	string ch1[n] = {"niko", "hunter", "jackz", "monesy", "alseibk"};
	max1 = maxn(a1, n);
	max2 = maxn(a2, n);
	max3 = maxn(ch1, n);
	cout << "a1 max is " << max1 << endl;
	cout << "a2 max is " << max2 << endl;
	cout << "a3 max address " << max3 << " and a3 max address is " << &max3 << endl;

	delete[] a1;
	delete[] a2;
	return 0;
}

template<class T>
T maxn(T* arr, int m)
{
	T max = 0;
	for (int i = 0; i < m; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

template <> string maxn(string *arr, int m)
{
	string ch;
	int max = 0;
	for (int i = 0; i < m; i++)
	{
		if (max < arr[i].length())
		{
			max = arr[i].length();
			ch = arr[i];
		}
	}
	return ch;
}