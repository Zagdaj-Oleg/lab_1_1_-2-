#include "IntRange.h"
#include <iostream>
using namespace std;

int main()
{
	IntRange z;
	z.Read();
	z.Display();
	cout << " rangeCheck = " << z.rangeÑheck() << endl << endl;
	
	cout << " if rangeCheck = 1, then in the range else not in range" << endl;
	
	return 0;
}