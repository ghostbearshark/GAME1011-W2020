#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	// Variables to read in a file
	fstream file;
	string input;

	// Open the file
	file.open("wallace.txt", ios::in);
	if (file.fail())
	{
		cout << "File open error!" << endl;
		return 0;
	}

	// Read the file and print to the screen.
	// file >> input;
	getline(file, input);
	while (!file.fail())
	{
		cout << input << endl;
		getline(file, input);
		// file >> input;
	}

	// Close the file
	file.close();

	return 0;
}