#include "Puppies.h"
#include <cstring>

class ShihTzu : public Puppies
{
private:
	char country[15];

public:
	ShihTzu();
	ShihTzu(char const pGend[], int pAge, double pWeight, double pHeight, char const sCountry[]) : Puppies(pGend, pAge, pWeight, pHeight)
	{
		strcpy_s(country, sCountry);
	}
	char getCountry();
	double calcWeeklyCost();
	~ShihTzu();
};

