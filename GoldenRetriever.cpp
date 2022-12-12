#include <cstring>
#include <iostream>
#include "GoldenRetriever.h"

using namespace std;

GoldenRetriever::GoldenRetriever()
{
    cout << "GoldenRetriever Default Constructor Called" << endl;

    strcpy_s(name,"");
}

char GoldenRetriever::getName()
{
    return *this->name;
}

double GoldenRetriever::calcWeeklyCost()
{
    double cost;
    int cup;

    if (weight < 3)
    {
        cup = 3;
    }
    else if ((weight >= 3) && (weight <= 6))
    {
        cup = 4;
    }
    else if (weight > 6)
    {
        cup = 5;
    }

    return cup * 100 * 7;
}

GoldenRetriever::~GoldenRetriever()
{
    cout << "GoldenRetriever Destructor Successfully Called." << endl;
}
