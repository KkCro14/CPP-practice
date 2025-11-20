#include <iostream>
using namespace std;

int main()
{
	int count;
	int number;
	int sum = 0;
	double average;


	cout << "Enter amount of numbers: ";
	cin >> count;

	for (int i = 1; i <= count; i++)
	{
		cout << "Enter number: ";

		cin >> number;
		sum += number;
	}

	average = (double)sum / count;

	cout << endl;
	cout << "Average = " << average << endl;

	return 0;
}