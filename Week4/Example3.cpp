#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
	IntArray table(10);

	for (int i = 0; i < table.size(); i++)
	{
		table[i] = i;
	}

	for (int i = 0; i < table.size(); i++)
	{
		cout << table[i] << " ";
	}
	cout << endl;

	// Try to store outside array bounds
	table[table.size()] = 0;

	return 0;
}