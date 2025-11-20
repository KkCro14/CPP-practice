#include <iostream>
using namespace std;

int main()
{
	char again;

	do
	{
		double bill;
		int tip_percent;

		do 
		{
			cout << "Please insert bill amount: ";
			cin >> bill;

			if (bill <= 0)
			{
				cout << "INVALID" << endl;
			}
			

		} while (bill <= 0);

		
		do
		{
			cout << "Please insert tip amount(10%, 15%, or 20%): ";
			cin >> tip_percent;
			cout << endl;

			if (tip_percent != 10 && tip_percent != 15 && tip_percent != 20)
			{
				cout << "INVALID" << endl;
			}

		} while (tip_percent != 10 && tip_percent != 15 && tip_percent != 20);

		double tip = bill * (tip_percent * 0.01);
		double total = bill + tip;

		cout << "Bill: " << bill << endl;
		cout << "Tip: " << tip << endl;
		cout << "Total: " << total << endl;
		cout << endl;

		cout << "calculate another bill?: ";
		cin >> again;

	} while (again == 'y' || again == 'Y');

	cout << endl;
	cout << "Goodbye!" << endl;

	return 0;
}