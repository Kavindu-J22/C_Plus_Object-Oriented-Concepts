#include <iostream>
#include <cstring>
#include "Puppies.h"
#include "Bulldog.h"
#include "GermanShepherd.h"
#include "GoldenRetriever.h"
#include "ShihTzu.h"

using namespace std;

int main()
{
	GermanShepherd g1("male", 3, 5, 25,"GA");
	GermanShepherd g2("female", 5, 8, 38,"GB");
	Bulldog b1("male", 1, 2, 10, "paniya");
	GoldenRetriever gr1("male", 2, 2, 18,"Toby");
	GoldenRetriever gr2("male", 3, 3, 22,"Timmy");
	GoldenRetriever gr3("female", 2, 4, 20,"Shina");
	GoldenRetriever gr4("female", 3, 5, 21,"Shiba");
	ShihTzu s1("male", 2, 5, 19,"China");
	ShihTzu s2("female", 1, 1, 12,"Malaysia");

	double tot;
	
	tot = (g1.calcWeeklyCost() + g2.calcWeeklyCost() + b1.calcWeeklyCost() + gr1.calcWeeklyCost() + gr2.calcWeeklyCost() + gr3.calcWeeklyCost() + gr4.calcWeeklyCost() + s1.calcWeeklyCost() + s2.calcWeeklyCost());

	cout << "Total Cost for all Puppies for 7 Days : " << tot << "/=" << endl << endl;

	return 0;
}