#include <cstring>
#include <iostream>
#include "Puppies.h"

using namespace std;

Puppies::Puppies()
{
    cout << "Puppies Default Constructor Called" << endl;

    strcpy_s(gender,"not mentioned");
    age = 0;
    weight = 0;
    height = 0;
}

Puppies::Puppies(char const pGend[], int pAge, double pWeight, double pHeight)
{
    strcpy_s(gender, pGend);
    age = pAge;
    weight = pWeight;
    height = pHeight;
}

Puppies::~Puppies()
{
    cout << "Puppies Destructor Successfully Called." << endl;
}

char Puppies::getGender()
{
    return *this->gender;
}

int Puppies::getAge()
{
    return age;
}

double Puppies::getWeight()
{
    return weight;
}

double Puppies::getHeight()
{
    return height;
}