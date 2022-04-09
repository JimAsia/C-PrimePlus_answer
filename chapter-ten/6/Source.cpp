#include <iostream>
using std::cout;
using std::endl;
using std::cin;
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void showMove() const;
	Move add(const Move& m) const;
	void reset(double a = 0, double b = 0);
};

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showMove() const
{
	cout << "x: " << x << "     y: " << y << endl;
}

Move Move::add(const Move& m) const
{
	Move n;
	n.x = m.x + x;   // n.x+=m.x is wrong
	n.y = m.y + y;
	return n;
}

void Move::reset(double a, double b)
{
	cout << "Initialize.\n";
	x = a;
	y = b;
}


int main()
{
	Move m(4, 5);
	Move n(1, 2);
	m.showMove();
	n.showMove();
	m = m.add(n);    // m.add(n) is wrong
	m.showMove();
	m.reset();
	m.showMove();
	return 0;
}