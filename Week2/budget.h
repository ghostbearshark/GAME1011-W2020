#pragma once
#include "auxil.h"

class Budget
{
private:
	static double corpBudget;
	double divBudget;
public:
	Budget()
	{
		divBudget = 0;
	}
	void addBudget(double b)
	{
		divBudget += b;
		corpBudget += divBudget;
	}
	double getDivBudget() const
	{
		return divBudget;
	}
	static double getCorpBudget()
	{
		return corpBudget;
	}
	// Function Prototype
	static void mainOffice(double);
	// Friend function
	friend void Aux::addBudget(double);
};