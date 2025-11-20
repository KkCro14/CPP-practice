#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	char light;
	int estimation; // 1- safe, 2- no
	int emergency; // 1-yes, 2-no

	cout << "Enter light color(R,Y,G): ";
	cin >> light;
	cout << endl;

	switch (light)
	{
		case 'G':
		case 'g':
			cout << "GO!" << endl;
			break;

		case 'Y': 
		case 'y':
			cout << "IS IT SAFE TO STOP?(1 = yes, 2 = no): ";
			cin >> estimation;
			cout << endl;
			
			if (estimation == 1)
			{
				cout << "GO FASTER! YOU CAN MAKE IT!" << endl;
			}

			if (estimation == 2)
			{
				cout << "STOP OR YOU'LL CRASH!" << endl;
			}

			break;

		case 'R':
		case 'r':
			cout << "STOP!" << endl;
			cout << "IS THERE AN EMERCENCY VEHICLE(1 = yes, 2 = no)??: "; \
			cout << endl;
			cin >> emergency;

			if (emergency == 1)
			{
				cout << "MOVE OVER AND LET THE EMERGENCY VEHICLE PASS!!!" << endl;
				cout << endl;
			}
			else
				cout << "DONT MOVE UNTIL GREEN!" << endl;

			break;

		default:
		{
			cout << "INVALID INPUT" << endl;
		}
	}

	

	return 0;
}