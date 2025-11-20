#include <iostream>
using namespace std;

int main()
{
	char again;

	do
	{
		int guess = 1;
		int pin = 4321;
		int count = 1;

		cout << "Locked. ";


		do
		{
			if (count != 1)
			{
				cout << "Incorrect pin" << endl;
			}
			
			cout << " Please insert your pin: ";
			cin >> guess;

			count = 2;

		}while (guess != pin);

		cout << "CORRECT!" << endl;

		cout << "Phone unlocked. Would you like to lock phone?(y/n): ";
		cin >> again;


	} 
	while (again == 'y' || again == 'Y');


	
	

	return 0;
}