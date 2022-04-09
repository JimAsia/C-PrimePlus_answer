#include <iostream>

class Plorg
{
private:
	char name[19];
	int CI;
public:
	Plorg() { strcpy_s(name, 19, "Plorga"); CI = 50; };
	Plorg(const char* n, int c = 50);
	void Show() const;
};

Plorg::Plorg(const char* n, int c)
{
	strcpy_s(name, 19, n);
	CI = c;
}

void Plorg::Show() const
{
	std::cout << "Plorg name is " << name << std::endl;
	std::cout << "Plorg CI is " << CI << std::endl;
}

int main()
{
	Plorg p1;
	p1.Show();
	const char* n = "Niko";
	Plorg p2(n, 55);
	p2.Show();

	return 0;
}