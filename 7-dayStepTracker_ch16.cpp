#include <iostream>
using namespace std;

int total;

int main()
{
	int steps;

	for(int day = 1; day <= 7; day++)
	{
		cout << "Input daily steps: ";
		cin >> steps;

		total = total + steps;
	}

	int average = total / 7;

	cout << endl;
	cout << "Total steps this week: " << total << endl;
	cout << "Average steps this week: " << average << endl;
	cout << endl;


	return 0;
}