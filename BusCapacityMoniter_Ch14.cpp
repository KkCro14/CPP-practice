#include <iostream>
using namespace std;

int main()
{
	int c; //capacity
	int stops; //stops
	int p = 0; //passengers
	int max = 0; //max passengers seen
	int violations = 0;
	int safe = 0; // current streak of safe stops
	int streak = 0; // longest safe streak


	cout << "Enter bus capacity: ";
	cin >> c;

	cout << "Enter number of stops: ";
	cin >> stops;
	cout << endl;


	for (int s = 1; s <= stops; s++)
	{
		int change; //change
		cout << "Stop " << s << ". Please insert passenger change: ";
		cin >> change;
		

		p += change; // people + change = people

		if (p < 0)
		{
			p = 0;
		}

		if (p > max)
		{
			max = p;
		}

		if (p <= c)
		{

			safe++; // continue safe streak

			if (safe > streak)
			{
				streak = safe;
				cout << "Passengers: " << p << endl;
				cout << "Safe streak: " << streak << endl;
				cout << endl;
			}

		}
		else
		{
			violations++;
			safe = 0; // safestreak broken

			cout << "Passengers: " << p << endl;
			cout << "Violation recieved! count: " << violations << endl;
			cout << endl;
		}
		
	}
	cout << "======= Summary =======" << endl;
	cout << "Max occupancy: " << max << endl;
	cout << "Violations: " << violations << endl;
	cout << "Longest safe streak: " << streak << endl;


	return 0;
}