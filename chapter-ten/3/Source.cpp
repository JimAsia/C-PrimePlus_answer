#include <iostream>
#include "golf.h"

int main()
{
	using namespace std;
	golf ann("Ann Birdfree", 24);
	ann.showgolf();
	ann.handicapz(16);
	ann.showgolf();
	golf andy;
	while (andy.setgolf())
	{
		andy.showgolf();
	}
	return 0;
}