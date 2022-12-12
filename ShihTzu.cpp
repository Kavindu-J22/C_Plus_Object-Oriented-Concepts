#include <cstring>
#include <iostream>
#include "ShihTzu.h"

using namespace std;

ShihTzu::ShihTzu()
{
    cout << "ShihTzu Default Constructor Called" << endl;

    strcpy_s(country, "");
}

char ShihTzu::getCountry()
{
    return *this->country;
}

double ShihTzu::calcWeeklyCost()
{
    double cost;
    int cup;

    if (weight < 2)
    {
        cup = 2;
    }
    else if ((weight >= 2) && (weight <= 4))
    {
        cup = 3;
    }
    else if (weight > 4)
    {
        cup = 4;
    }

    return cup * 100 * 7;
}

ShihTzu::~ShihTzu()
{
    cout << "ShihTzu Destructor Successfully Called." << endl;
}
