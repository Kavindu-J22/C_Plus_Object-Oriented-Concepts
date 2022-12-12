#include "Puppies.h"

class Bulldog : public Puppies
{
private:
	char owner[30];

public:
	Bulldog();
	Bulldog(char const pGend[], int pAge, double pWeight, double pHeight, char const bOwner[]) : Puppies(pGend, pAge, pWeight, pHeight)
	{
		strcpy_s(owner, bOwner);
	}
	char getOwner();
	double calcWeeklyCost();
	~Bulldog();
};

