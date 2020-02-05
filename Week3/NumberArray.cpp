#include <iostream>
#include "NumberArray.h"
using namespace std;

NumberArray::NumberArray(NumberArray &obj)
{
	arraySize = obj.arraySize;
	aPtr = new double[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = obj.aPtr[i];	// Explicitly assigned each array element to the new array
	}
}

NumberArray::NumberArray(int size, double value)
{
	arraySize = size;
	aPtr = new double[arraySize];
	setValue(value);
}

void NumberArray::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aPtr[i] << " ";
	}
}

void NumberArray::setValue(double value)
{
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = value;
	}
}
