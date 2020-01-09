#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	// Constructor
	Person(string name1, int age1)
	{
		name = name1;
		age = age1;
	}

	// Inline functions
	int getAge()
	{
		return age;
	}
	string getName()
	{
		return name;
	}
};

struct Rectangle
{
	int width, height;
};

int main()
{
	Rectangle* pRect = nullptr;
	Person* pPerson = nullptr;

	Rectangle rect;
	pRect = &rect;

	(*pRect).width = 10;
	pRect->height = 20;

	cout << "Area of the rectangle is: " << pRect->width * pRect->height << endl;

	// Dynamically allocated object access through the pointer
	pRect = new Rectangle;
	pRect->width = 6;
	pRect->height = 5;
	cout << "The area of the rectangle is " << pRect->width * pRect->height << endl;
	delete pRect;
	pRect = nullptr;

	pPerson = new Person("Wallace Balaniuc", 32);
	cout << pPerson->getName() << " is " << pPerson->getAge() << " years old" << endl;
	delete pPerson;
	pPerson = nullptr;

	return 0;
}