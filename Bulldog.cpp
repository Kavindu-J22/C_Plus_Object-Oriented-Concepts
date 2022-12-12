#include <cstring>
#include <iostream>
#include "Bulldog.h"

using namespace std;

Bulldog::Bulldog()
{
    cout << "Bulldog Default Constructor Called" << endl;

    strcpy_s(owner, "");
}

char Bulldog::getOwner()
{
    return *this->owner;
}

double Bulldog::calcWeeklyCost()
{
    double cost;
    int cup;

    if (weight < 3)
    {
        cup = 5;
    }
    else if ((weight >= 3) && (weight <= 5))
    {
        cup = 7;
    }
    else if (weight > 5)
    {
        cup = 8;
    }

    cost = cup * 700;

    return cost;
}

Bulldog::~Bulldog()
{
    cout << "Bulldog Destructor Successfully Called." << endl;
}
