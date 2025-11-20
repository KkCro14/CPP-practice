#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter the year: ";
	cin >> year;
	cout << endl;

	if (year <= 0)
	{
		cout << "INVALID YEAR" << endl;
		cout << endl;
	}

	if (year % 400 == 0)
	{
		cout << "Leap Year";
		cout << endl;
	}

	if (year % 4 == 0 and year % 100 >= 1)
	{
		cout << "Leap year";
		cout << endl;
	}

	else
	{
		cout << "Not a leap year";
		cout << endl;
	}

	return 0;
}