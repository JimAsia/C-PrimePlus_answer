#include <iostream>

using namespace std;
struct CandyBar {
	const char* brand;
	float weight;
	int calories;
};

void Set(CandyBar& sample, const char* b = "Millennium Munch", const float w = 2.58, const int c = 350);
void Show(CandyBar& sample);

int main()
{
	CandyBar bar1;
	Set(bar1);
	Show(bar1);
	
	return 0;
}

void Set(CandyBar& sample, const char* b, const float w, const int c)
{
	sample.brand = b;
	sample.calories = c;
	sample.weight = w;
}

void Show(CandyBar& sample)
{
	cout << "Candy Brand: " << sample.brand << endl;
	cout << "\nCandy Weight: " << sample.weight << endl;
	cout << "\nCandy Calories: " << sample.calories << endl;
}
