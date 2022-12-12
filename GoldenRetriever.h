#include "Puppies.h"
#include <cstring>

class GoldenRetriever : public Puppies
{
private:
	char name[30];

public:
	GoldenRetriever();
	GoldenRetriever(char const pGend[], int pAge, double pWeight, double pHeight, char const gName[]) : Puppies(pGend, pAge, pWeight, pHeight)
	{
		strcpy_s(name, gName);
	}
	char getName();
	double calcWeeklyCost();
	~GoldenRetriever();
};

