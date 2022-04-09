#include <iostream>
#include "list.h"
using std::cout;
using std::endl;
using std::cin;

MyList::MyList()
{
	top = 0;
}

bool MyList::Isempty()
{
	if (top == 0)
		return true;
	else
		return false;
}


bool MyList::Isfull()
{
	if (top == MAX)
		return true;
	else
		return false;
}

void MyList::Showlist()
{
	cout << "List: \n";
	for (int i = 0; i < top; i++)
	{
		cout << "#" << i << ": " << lists[i] << endl;
	}
}

void MyList::visit(void (*pf)(int& ))
{
	for (int i = 0; i < top; i++)
	{
		pf(lists[i]);
	}
}

bool MyList::add(const int& n)
{
	lists[top++] = n;
	return true;
}

void plus100(int& n)        // pf 指向的函数（该函数以int作为引用）（不是成员函数）
{
	n += 100;
}