// This program demonstrates the use of ostringstream
// and sophisticated formatting
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

// Function prototype
string dollarFormat(double);

int main()
{
	const int ROWS = 3, COLS = 2;
	// 2D Array
	double amount[ROWS][COLS] = { 184.45, 7,
									59.15, 64.32,
									7.29, 1289 };

	// Format table of dollar amounts to be right justified and column width of 10
	cout << right;
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLS; column++)
		{
			cout << setw(10) << dollarFormat(amount[row][column]);
		}
		cout << endl;
	}

	return 0;
}

string dollarFormat(double amount)
{
	// Create ostringstream object
	ostringstream outStr;

	// Set up format information and write to outStr
	outStr << showpoint << fixed << setprecision(2);
	outStr << '$' << amount;

	return outStr.str();
}