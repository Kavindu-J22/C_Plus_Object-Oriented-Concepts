#include<iostream>
#include<iomanip>

using namespace std;

void findMarks(int m1, int m2, float& t_CA1, float& t_CA2);

struct marks
{
	int student;
	int mrk1;
	int mrk2;
	int CA1;
	int CA2;
};

int main()
{
	marks d1[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "student : " << i + 1 << endl;

		cout << "Enter Mark 1 :";
		cin >> d1[i].mrk1;

		cout << "Enter mark 2 : ";
		cin >> d1[i].mrk2;

		d1[i].student = i + 1;
		findMarks(d1[i].mrk1, d1[i].mrk2, d1[i].CA1, d1[i].CA2);

		cout << endl;
	}

	cout << "student\t\mark1\t\mark2\t\CA1\t\CA2" << endl;
	for (int j = 0; j < 5; j++);
	{
		cout << d1[j].student << "\t\t" << d1[j].mrk1 << "\t\t" << d1[j].mrk2 << "\t\t" << fixd << setprecision(2) << d1[j]CA1 << "\t" << d1[j].CA2 << endl;
	}
}

void findMarks(int m1, int m2, float &t_CA1, float &t_CA2)
{
	t_CA1 = m1 * (20 / 100.0);
	t_CA2 = m2 * (30 / 100.0);
}
