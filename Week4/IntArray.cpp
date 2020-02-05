#include "IntArray.h"
#include <cstdlib>

IntArray::IntArray(int arraySize)
{
	if (arraySize < 0)
	{
		arraySizeError();
	}
	else
	{
		this->arraySize = arraySize;
	}

	aPtr = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		*(aPtr + i) = 0;	// Initialize arrays to 0
	}
}

IntArray::IntArray(const IntArray &obj)
{
	arraySize = obj.arraySize;
	aPtr = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		*(aPtr + i) = *(obj.aPtr + i);	// Copies all values from obj's array to our array
	}
}

IntArray::~IntArray()
{
	if (arraySize > 0)
	{
		delete[] aPtr;
	}
}

void IntArray::subError() const
{
	cout << "ERROR: Subscript out of range." << endl;
	exit(0);
}

void IntArray::subError(int subscript) const
{
	cout << "ERROR: Subscript out of range. " << "Value: " << subscript << " is invalid" << endl;
	exit(0);
}

void IntArray::arraySizeError() const
{
	cout << "ERROR: Array Size Provided invalid. Please give a size greater than 0" << endl;
	exit(0);
}


int & IntArray::operator[](int sub) const
{
	if (sub < 0 || sub >= arraySize)
	{
		subError(sub);
	}
	return aPtr[sub];
}
