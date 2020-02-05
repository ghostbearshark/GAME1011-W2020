// This program demonstrates object assignment
#include <iostream>
using namespace std;

class Rectangle
{
private:
	double width, length;
public:
	Rectangle(double width, double length)
	{
		this->width = width;
		this->length = length;
	}
	double getWidth() const
	{
		return width;
	}
	double getLength() const
	{
		return length;
	}
	void output() const
	{
		cout << "Width is " << this->width << ", " << "Length is " << this->length << endl;
	}
};
/*
int main()
{
	Rectangle box1(10, 30), box2(5, 10);

	cout << "Box 1 data:\t"; 
	box1.output();

	cout << "Box 2 data:\t";
	box2.output();

	// Assignment
	box2 = box1;

	cout << "Box 1 data:\t";
	box1.output();

	cout << "Box 2 data:\t";
	box2.output();

	return 0;
}
*/