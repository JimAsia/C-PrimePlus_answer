#include <iostream>
void Show(float* grade, int n);
float average(float* grade, int n);
using namespace std;
int main()
{
	using namespace std;
	float grade[10];
	float aver;
	int n = 0;
	cout << "Please enter golf grade(input non-digital to quit): ";
	for (int i = 0; i < 10; i++)
	{
		cin >> grade[i];
		if (!cin.good())
			break;
		else
			n++;
	}

	Show(grade, n);
	aver = average(grade, n);
	cout << "\nYour grade average is " << aver << endl; 
	return 0;
}

void Show(float* grade, int n)
{
	cout << "\nYour golf grade: ";
	for (int i = 0; i < n; i++)
	{
		cout << grade[i] << " ";
	}
}

float average(float* grade, int n)
{
	float sum, aver;
	for (int i = 0; i < n; i++)
	{
		sum += grade[i];
	}
	aver = sum / n;
}
