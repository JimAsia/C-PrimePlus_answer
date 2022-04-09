#include <iostream>

template<class T>
T max5(T* arr);

int main()
{
	int a1[5] = {1, 2, 3, 4, 5};
	double a2[5] = { 1.11, 2.22, 3.33, 4.4, 5.5 };
	int max1;
	double max2;
	max1 = max5(a1);
	max2 = max5(a2);

	std::cout << "int max:" << max1 << std::endl;
	std::cout << "double max:" << max2 << std::endl;

	return 0;
}

template<class T>
T max5(T* arr)
{
	T max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}