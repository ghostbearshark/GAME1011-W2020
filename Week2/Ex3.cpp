// Example of the default copy constructor
#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
	string street;
public:
	Address()
	{
		street = "";
	}
	Address(string st)
	{
		street = st;
	}
	void setStreet(string st)
	{
		street = st;
	}
	string getStreet() const
	{
		return street;
	}
};

int main()
{
	Address mary("123 Fake St");
	Address joan = mary;
	cout << "Mary lives at " << mary.getStreet() << endl;
	cout << "Joan lives at " << joan.getStreet() << endl;

	// Joan moves out
	joan.setStreet("456 Main St");
	cout << "Mary lives at " << mary.getStreet() << endl;
	cout << "Joan lives at " << joan.getStreet() << endl;

	return 0;
}