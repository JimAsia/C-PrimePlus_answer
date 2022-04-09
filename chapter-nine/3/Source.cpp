#include <iostream>
#include <new>
#include <cctype>
const int N = 2;
const int M = 50;

struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char butter[M];
	chaff* ch1 = new (butter) chaff[N];
	char* ch = new char[M];
	chaff* ch2 = new (ch) chaff[N];
	char dross[20] = { 0 };
	int slag = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "Enter dross of #" << i + 1 << " chaff;\n";
		cin.getline(dross, 20);
		cout << "Enter slag of #" << i + 1 << " chaff;\n";
		cin >> slag;
		cin.get();
		strcpy_s(ch1[i].dross, dross);
		strcpy_s(ch2[i].dross, dross);
		ch1[i].slag = ch2[i].slag = slag;
	}

	for (int i = 0; i < 2; i++)
	{
		cout << "chaff #" << i + 1 << ":\n";
		cout << "pc1.dross: " << ch1[i].dross << ", pc1.slag: " << ch1[i].slag << endl;
		cout << "pc1.dross: " << ch2[i].dross << ", pc2.slag: " << ch2[i].slag << endl;
	}
	delete[] ch;
	system("pause");
	return 0;
}
