#include <iostream>
#include "sales.h"
namespace SALES
{
	Sales::Sales()
	{
		for (int i = 0; i < QUARTERS; i++)
			sales[i] = 0;
		average = 0;
		max = 0;
		min = 0;
	}

	Sales::Sales(const double* ar, int n)
	{
		double maximun = 0, minimum = 0, aver, sum = 0;
		for (int i = 0; i < QUARTERS; i++)
		{
			sales[i] = ar[i];
			if (maximun < ar[i])
			{
				maximun = ar[i];
			}
			if (minimum > ar[i])
			{
				minimum = ar[i];
			}
			sum += ar[i];
		}
		aver = sum / QUARTERS;
		average = aver;
		max = maximun;
		min = minimum;

	}

	void Sales::setSales()
	{
		double maximun = 0, minimum = 0, aver, sum = 0;
		std::cout << "Please enter sales number: ";
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cin >> sales[i];
			if (maximun < sales[i])
			{
				maximun = sales[i];
			}
			if (minimum > sales[i])
			{
				minimum = sales[i];
			}
			sum += sales[i];
		}
		aver = sum / QUARTERS;
		average = aver;
		max = maximun;
		min = minimum;
	}

	void Sales::showSales()
	{
		std::cout << "max: " << max << std::endl;
		std::cout << "min: " << min << std::endl;
		std::cout << "average: " << average << std::endl;
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Sale " << i << " is " << sales[i] << std::endl;
		}
	}
}