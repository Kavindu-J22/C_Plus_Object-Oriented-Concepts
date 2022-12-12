#pragma once
class Puppies
{
protected:
	char gender[15];
	int age;
	double weight;
	double height;

public:
	Puppies();
	Puppies(char const pGend[], int pAge, double pWeight, double pHeight);
	~Puppies();
	char getGender();
	int getAge();
	double getWeight();
	double getHeight();
};

