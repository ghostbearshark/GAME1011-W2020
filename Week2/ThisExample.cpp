#include "ThisExample.h"
#include <iostream>
using namespace std;

void ThisExample::setValue(int x)
{
	this->x = x;
}

void ThisExample::printAddressAndValue()
{
	cout << "The object at address " << this << " has value " << this->x << endl;
}
