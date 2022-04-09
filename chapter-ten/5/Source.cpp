#include <iostream>
#include <stack>
struct customer {
	char fullname[35];
	double payment;
};

int main()
{
	double sum = 0;
	customer* cs = new customer[3];
	std::stack<customer> c;
	strcpy_s(cs[0].fullname, 35, "Niko");
	strcpy_s(cs[1].fullname, 35, "Jackz");
	strcpy_s(cs[2].fullname, 35, "Monsesy");
	cs[0].payment = 120;
	cs[1].payment = 130;
	cs[2].payment = 140;
	for (int i = 0; i < 3; i++)
	{
		c.push(cs[i]);
	}
	while (!c.empty())
	{
		customer c1;
		c1 = c.top();
		sum += c1.payment;
		std::cout << "Payment: " << sum << std::endl;
		c.pop();
	}
	delete[] cs;

	return 0;
}
