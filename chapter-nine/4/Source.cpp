#include <iostream>
#include "sales.h"
int main()
{
	
	const double arr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5};
	SALES::Sales sale1;
	SALES::setSales(sale1);
	SALES::showSales(sale1);
	SALES::Sales sale2;
	SALES::setSales(sale2, arr, 4);
	SALES::showSales(sale2);
	return 0;
}