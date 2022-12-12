#include <cstring>
#include <iostream>
#include "GermanShepherd.h"

using namespace std;

GermanShepherd::GermanShepherd()
{
    cout << "German Shephard Default Constructor Called" << endl;

	strcpy_s(cage, "");
}

char GermanShepherd::getCage()
{
	return *this->cage;
}

double GermanShepherd::calcWeeklyCost()
{
    double cost;
    int cup;

    if (weight < 4)
    {
        cup = 4;
    }
    else if ((weight >= 4) && (weight <= 7))
    {
        cup = 5;
    }
    else if (weight > 7)
    {
        cup = 6;
    }

    return cup * 100 * 7;
}

GermanShepherd::~GermanShepherd()
{
    cout << "GermanShepherd Destructor Successfully Called." << endl;
}
