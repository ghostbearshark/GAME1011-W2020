#include "budget.h"

// Definition of the stat member of the Budget class
double Budget::corpBudget = 0;

void Budget::mainOffice(double budReq)
{
	corpBudget += budReq;
}
