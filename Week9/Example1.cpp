// This program demonstrates reading and writing a file using fstream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// When working with a file stream
	// 1. Declare the filestream object to use
	// 2. "Open" the filestream to a desired file
	// 3. Work on the file
	// 4. "Close" the filestream

	// 1.
	fstream inOutFile;
	string word; // Used to read a word from the file.

	// 2. 
	inOutFile.open("inout.txt");
	// Error checking
	if (!inOutFile)
	{
		// File was not found
		cout << "The file was not found." << endl;
		return 1;
	}

	// 3. 
	while (inOutFile >> word)
	{
		cout << word << endl;
	}

	// Clear end of file flag to allow additional file operations
	inOutFile.clear();

	inOutFile << "Wallace" << endl;

	// 4. 
	inOutFile.close();

	return 0;
}