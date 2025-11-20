//self checkout
#include <iostream>
using namespace std;

int main()
{


	double price_1; //use double because the prices have decimals
	double price_2;
	double price_3;

	int quantity_1; //use int because quantities are whole numbers
	int quantity_2;
	int quantity_3;

	//item one
	cout << "Enter item one price: ";
	cin >> price_1;
	cout << "Enter quantity for item one: ";
	cin >> quantity_1;

	//item two
	cout << "Enter item two price: ";
	cin >> price_2;
	cout << "Enter quantity for item two: ";
	cin >> quantity_2;

	//item three
	cout << "Enter item three price: ";
	cin >> price_3;
	cout << "Enter quantity for item three: ";
	cin >> quantity_3;

	//total 
	double total;

	total = (price_1 * quantity_1) + (price_2 * quantity_2) + (price_3 * quantity_3);


	cout << endl;
	cout << "You're total bill is: " << total << "." << endl;
	cout << " Have a great day!" << endl;

	return 0;
}