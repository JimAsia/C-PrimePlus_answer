#include <iostream>
#include "sales.h"
namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double maximun = 0, minimum = 0, aver, sum = 0;
		for (int i = 0; i < QUARTERS; i++)
		{
			s.sales[i] = ar[i];
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
		s.average = aver;
		s.max = maximun;
		s.min = minimum;

	}

	void setSales(Sales& s)
	{
		double maximun = 0, minimum = 0, aver, sum = 0;
		std::cout << "Please enter sales number: ";
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cin >> s.sales[i];
			if (maximun < s.sales[i])
			{
				maximun = s.sales[i];
			}
			if (minimum > s.sales[i])
			{
				minimum = s.sales[i];
			}
			sum += s.sales[i];
		}
		aver = sum / QUARTERS;
		s.average = aver;
		s.max = maximun;
		s.min = minimum;
	}

	void showSales(const Sales& s)
	{
		std::cout << "max: " << s.max << std::endl;
		std::cout << "min: " << s.min << std::endl;
		std::cout << "average: " << s.average << std::endl;
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Sale " << i << " is " << s.sales[i] << std::endl;
		}
	}
}