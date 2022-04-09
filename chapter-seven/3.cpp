#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void Show(box b1);
void Adress(box *b2);

int main()
{
	box b1 = {"Niko", 53, 88.8, 176.8, 200};
	box b2 = {"Jackz", 59, 95, 180.5};
	Show(b1);
	Adress(&b2);
	
	return 0;
}

void Show(box b1)
{
	cout << "maker: " << b1.maker << endl;
	cout << "height: " << b1.height << endl;
	cout << "width: " << b1.width << endl;
	cout << "length: " << b1.length << endl;
	cout << "volume: " << b1.volume << endl;
}

void Adress(box *b2)
{
	b2->volume = b2->width * b2->length * b2->height;
	cout << "maker: " << b2->maker << endl;
	cout << "height: " << b2->height << endl;
	cout << "width: " << b2->width << endl;
	cout << "length: " << b2->length << endl;
	cout << "volume: " << b2->volume << endl;
}
