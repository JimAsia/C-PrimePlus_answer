#include <iostream>
#include "cow.h"
#include <cstring>
using namespace std;
Cow::Cow()
{
	weight = 0;
	hobby = new char[5];
	strcpy_s(name, 20, "None");
	strcpy_s(hobby, 5, "None");       // 5 is 4 character and '\0'.
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy_s(name, 20, nm);
	hobby = new char[strlen(ho)+1];
	strcpy_s(hobby, strlen(ho) + 1, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy_s(name, 20, c.name);
	int len = strlen(c.hobby) + 1;
	hobby = new char[len];
	strcpy_s(hobby, len, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
	{
		return *this;
	}
	delete[] hobby;
	int len = strlen(c.hobby) + 1;
	hobby = new char[len];
	weight = c.weight;
	strcpy_s(name, 20, c.name);
	strcpy_s(hobby, len, c.hobby);
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "Cow name: " << name << std::endl;
	std::cout << "Cow hobby: " << hobby << std::endl;
	std::cout << "Cow weight: " << weight << std::endl;
}