#include "Puppies.h"
#include <cstring>

class GermanShepherd : public Puppies
{
private:
	char cage[5];

public:
	GermanShepherd();
	GermanShepherd(char const pGend[], int pAge, double pWeight, double pHeight, char const gCage[]) : Puppies(pGend, pAge, pWeight, pHeight)
	{
		strcpy_s(cage, gCage);
	}
	char getCage();
	double calcWeeklyCost();
	~GermanShepherd();
};

