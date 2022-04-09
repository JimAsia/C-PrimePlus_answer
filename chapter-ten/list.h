#ifndef MYLIST_H_
#define MYLIST_H_

class MyList
{
private:
	enum { MAX = 5 };
	int lists[MAX];
	int top;
public:
	MyList();
	bool Isempty();
	bool Isfull();
	void Showlist();
	void visit(void (*pf)(int&));
	bool add(const int& n);
};

void plus100(int& n);
#endif