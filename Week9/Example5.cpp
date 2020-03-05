// Program shows how to rewind a file. 
// Writes a text file, opens it for reading, the rewinds it to the top
// and reads it again
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char ch;
	fstream ioFile("rewind.txt", ios::out);

	// Open file
	if (!ioFile)
	{
		cout << "Error in trying to create the file";
		return 0;
	}

	// Writing to the file and closing
	ioFile << "Is this class too easy?" << endl << "No, you are just super smart." << endl;
	ioFile.close();

	// Open the file
	ioFile.open("rewind.txt", ios::in);
	if (!ioFile)
	{
		cout << "Error in trying to open file";
		return 0;
	}

	// Read the file and print to the screen
	ioFile.get(ch);
	while (!ioFile.fail())
	{
		cout.put(ch);
		ioFile.get(ch);
	}

	// Rewind the file
	ioFile.clear();
	ioFile.seekg(-20, ios::end);

	// Read the file again and print to the screen
	ioFile.get(ch);
	while (!ioFile.fail())
	{
		cout.put(ch);
		ioFile.get(ch);
	}

	ioFile.close();

	return 0;
}