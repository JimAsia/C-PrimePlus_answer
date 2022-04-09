#include <iostream>
using namespace std;

int Fill_array(int n, double *arr);
void Show_arrat(int n, double *arr);
void Reverse_array(int n, double *arr);

int main()
{
	int num;
	double *arr = new double [10];
	num = Fill_array(10, arr);
	Show_arrat(num, arr);
	Reverse_array(num, arr);
	
	delete [] arr;
	return 0;
}

int Fill_array(int n, double *arr)
{
	cout << "Input your number: ";
	int i;
	while (i < n)
	{
		cin >> arr[i];
		if (!cin)
			break;
		
		i++;
	}
	return i;
}

void Show_arrat(int n, double *arr)
{
	cout << "Your array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void Reverse_array(int n, double *arr)
{
	double *arr_2 = new double [n];
	cout << "\nYour reverse array: ";
	for (int i = 0; i < n; i++)
	{
		arr_2[i] = arr[n-i-1];
		cout << arr_2[i] << " ";
	}
	delete [] arr_2;
	cout << endl;
}
