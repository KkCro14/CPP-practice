#include <iostream>
using namespace std;

int main()
{
	char shop;

	do
	{
		int budget = 0;
		int item;
		int item_count = 0;
		int total = 0;

		do
		{
			cout << "Enter Budget: ";
			cin >> budget;
			cout << endl;

			if (budget <= 0)
			{
				cout << "Invalid Budget. Try again." << endl;
			}

		} while (budget <= 0);

		do
		{
			
				cout << "Insert item price: $";
				cin >> item;
				cout << endl;


			if (item > budget)
			{
				cout << "Invalid. Pick a cheaper item." << endl;
				cout << "Remaining budget: $" << budget << endl;
				cout << endl;
			}
			else
			{
				budget = budget - item;
				cout << "Remaining budget: $" << budget << endl;

				item_count = item_count + 1;
				total = total + item;
			}

			

		} while (budget != 0 && item != 0);


		cout << "---- Receipt ----" << endl;
		cout << "Item count: " << item_count << endl;
		cout << "Total: $" << total << endl;
		cout << "Remaining Budget: $" << budget << endl;
		cout << endl;

		cout << "Go shopping again?(y/n): ";
		cin >> shop;
		cout << endl;

	} while (shop == 'y' || shop == 'Y');

	cout << "Have a wonderful day! :) ";
	cout << endl;

	return 0;
}