#include <iostream>
#include <iomanip>
#include "budget.h"
using namespace std;

/*
int main()
{
	const int N_DIVISIONS = 4;

	cout << "Enter the main office's budget request: ";
	double amount;
	cin >> amount;
	// Call the static main office function in my budget class
	Budget::mainOffice(amount);

	// Create instances of the Budget class
	Budget divisions[N_DIVISIONS];
	Aux auxOffices[N_DIVISIONS];

	// Get the budget for each of the divisions
	for (int count = 0; count < N_DIVISIONS; count++)
	{
		double bud;

		cout << "Enter the budget request for division " << (count + 1) << ": ";
		cin >> bud;
		divisions[count].addBudget(bud);
		cout << "Division " << (count + 1) << "'s auxiliary office: ";
		cin >> bud;
		auxOffices[count].addBudget(bud);
	}

	// Display the budget request for each division
	cout << setprecision(2);
	cout << showpoint << fixed;
	cout << "\Here are the divisions budget requests:\n";
	for (int count = 0; count < N_DIVISIONS; count++)
	{
		cout << "Division " << (count + 1) << "\t$"; // \t will tab the cursor
		cout << divisions[count].getDivBudget();
		cout << "\tAuxiliary Office of Division " << (count + 1) << "\t$";
		cout << auxOffices[count].getDivBudget() << endl;
	}

	// Display the total corporate budget
	cout << "Total budget requests (including main office):\t$";
	cout << Budget::getCorpBudget() << endl;

	return 0;
}
*/