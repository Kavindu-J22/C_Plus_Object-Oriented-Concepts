#include<iostream>
using namespace std;

void converterToFeetAndInches(int t_length, int &t_feet, int &t_inches);

int main()
{
	int length = 50;
	int feet, inches;

	converterToFeetAndInches(length, feet, inches);

	cout << "length :" << length << "=" << feet << "feet and " << inches << "inches" << endl;


	return 0;
}

void converterToFeetAndInches(int t_length, int& t_feet, int& t_inches)
{

	t_feet = t_length / 12;
	t_inches = t_length % 12;

}