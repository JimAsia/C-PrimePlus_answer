#include <iostream>
#include "golf.h"

int main()
{
	using namespace std;
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);
	handicap(ann, 16);
	showgolf(ann);
	golf andy;
	while (setgolf(andy))
	{
		showgolf(andy);
	}
	return 0;
}