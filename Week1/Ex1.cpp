#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
	// Properties
private:
	double radius;

	// Behaviours
public:
	void setRadius(double);
	double calcArea();

	/*
	void setRadius(double r)
	{
		radius = r;
	}
	double calcArea()
	{
		return 3.14 * pow(radius, 2);
	}
	*/
};
/*
int main()
{
	Circle circle1, circle2;

	circle1.setRadius(1);
	circle2.setRadius(2.5);

	// Print out the area
	cout << "The area of circle 1 is " << circle1.calcArea() << endl;
	cout << "The area of circle 2 is " << circle2.calcArea() << endl;

	return 0;
}
*/
void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::calcArea()
{
	return 3.14 * pow(radius, 2);
}
