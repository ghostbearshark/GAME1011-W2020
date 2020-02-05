// This program demonstrates the deficiencies of the default copy constructor
#include <iostream>
#include <iomanip>
#include "NumberArray.h"
using namespace std;

int main()
{
	NumberArray first(3, 10.5);

	NumberArray second = first;

	// Display the contents of our objects
	cout << setprecision(2) << fixed << showpoint;
	cout << "Value stored in the first object is: ";
	first.print();
	cout << endl << "Value stored in the second object is: ";
	second.print();
	cout << endl << endl;

	second.setValue(20.5);

	cout << "Value stored in the first object is: ";
	first.print();
	cout << endl << "Value stored in the second object is: ";
	second.print();
	cout << endl << endl;

	return 0;
}