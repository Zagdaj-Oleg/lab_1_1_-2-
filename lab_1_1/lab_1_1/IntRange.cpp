#include "IntRange.h"
#include <iostream>
#include <cmath>
using namespace std;
bool IntRange::Init(double x, double y, double z)
{
	if (x <= y )
	{
		first = x;
		second = y;
		number = z;
		return true;
	}
	else
	{
		return false;
	}
}

void IntRange::Read()
{
	double x, y, n;
	do
	{
	
		cout << " min = "; cin >> x;
		cout << " max = "; cin >> y;
		cout << " num = "; cin >> n;
	} while (!Init(x, y, n));
}
void IntRange::Display() const
{
	cout << endl;
	cout << " min = " << first << endl;
	cout << " max = " << second << endl;
}
double IntRange::rangeÑheck() const
{
	return (first<=number && second>number);
}