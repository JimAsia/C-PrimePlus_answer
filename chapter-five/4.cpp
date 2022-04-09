#include <iostream>
#include <cmath>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int years = 1;
	double DaphneInvest = 100, CleoInvest = 100, DaphneInsteret, CleoInsteret;
	DaphneInvest += 100 * 0.1;
		CleoInvest = CleoInvest + (CleoInvest * 0.05);
	while (DaphneInvest > CleoInvest)
	{
		DaphneInvest += 100 * 0.1;
		CleoInvest = CleoInvest + (CleoInvest * 0.05);
		years++;
	}
	cout << years << " years exceed.\n";
	
	return 0;
}
