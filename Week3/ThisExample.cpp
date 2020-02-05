#include "ThisExample.h"
#include <iostream>
using namespace std;

void ThisExample::setValue(int a)
{
	x = a;
}

void ThisExample::printAddressAndValue()
{
	cout << "The object at address " << this << " has value " << (*this).x << endl;
}
