#include <iostream>
using namespace std;

int main()
{
	//define variables;
	int age;
	int credit;
	int salary;

	cout << "LOAN ELIGIBILTY CHECKER" << endl;
	cout << endl;

	cout << "Input your age: ";
	cin >> age;
	cout << endl;

	if (age >= 21)
	{
		cout << "Input your yearly salary, rounded to the nearest whole number: ";
		cin >> salary;
		cout << endl;

		if (salary >= 3000)
		{
			cout << "Input your credit score: ";
			cin >> credit;
			cout << endl;

			if (credit >= 650)
			{
				cout << "Congratulations! Loan approved! " << endl;
			}
			else
			{
				cout << "Not eligible, low credit" << endl;
			}
		}
		else
		{
			cout << "Not eligible, low income" << endl;
		}
	}
	else
	{
		cout << "Not eligible, must be 21 yrs or older." << endl;
	}

	return 0;
}