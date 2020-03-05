// This program demonstrates stream object error testing
#include <iostream>
#include <fstream>
using namespace std;

void showState(fstream&);

int main()
{
	fstream testFile("stuff.dat", ios::out);
	if (testFile.fail())
	{
		cout << "Cannot open the file.\n";
		return 0;
	}

	// Assuming the file is successfully opened...
	int num = 10;
	cout << "Writing to the file.\n";
	testFile << num;
	showState(testFile);
	testFile.close();

	// Open the same file, read the number, show status
	testFile.open("stuff.dat", ios::in);
	if (testFile.fail())
	{
		cout << "Cannot open the file.\n";
		return 0;
	}
	// Reading from the file.
	cout << "Reading from the file. \n";
	testFile >> num;
	showState(testFile);

	// Invalid Read
	cout << "Forcing a bad read operation.\n";
	testFile >> num;
	showState(testFile);

	testFile.close();

	return 0;
}

void showState(fstream& file)
{
	cout << "File Status:\n";
	cout << " eof bit: " << file.eof() << endl;		// End of file bit
	cout << " fail bit: " << file.fail() << endl;	// Fail bit
	cout << " bad bit: " << file.bad() << endl;		// Bad bit
	cout << " good bit: " << file.good() << endl;	// Good bit
	file.clear();	// Clear any bad bits
}