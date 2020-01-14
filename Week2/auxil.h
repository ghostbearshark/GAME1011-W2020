#pragma once
class Aux
{
private:
	double auxBudget;
public:
	Aux()
	{
		auxBudget = 0;
	}
	// Function Prototypes
	void addBudget(double);
	double getDivBudget() const
	{
		return auxBudget;
	}
};

