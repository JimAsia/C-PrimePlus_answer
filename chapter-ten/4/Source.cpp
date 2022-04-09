#include <iostream>
#include "sales.h"
int main()
{
	const double arr[5] = { 1.1, 2.2, 3.3, 4.4 };
	SALES::Sales sale1;
	sale1.showSales();
	SALES::Sales sale2;
	sale2.setSales();
	sale2.showSales();
	SALES::Sales sale3(arr, 4);
	sale3.showSales();
	return 0;
}