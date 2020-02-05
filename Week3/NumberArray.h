#pragma once
class NumberArray
{
private:
	double* aPtr;
	int arraySize;
public:
	NumberArray(NumberArray &);				// Programmer defined copy constructor
	NumberArray(int size, double value);
	~NumberArray()
	{
		if (arraySize > 0)
		{
			delete[] aPtr;
		}
	}
	void print() const;
	void setValue(double value);
};

