#include <iostream>
using namespace std; 

int main()
{
	int choice;
	int light_on = 0; //0 = off, 1= on

	do
	{
		//Homescreen

		cout << "-------------------------------" << endl;
		cout << "    Mika's Smart Home Light" << endl;
		cout << "-------------------------------" << endl;

		cout << "        Room: Bedroom" << endl;
		cout << "        [1] = Turn on" << endl;
		cout << "        [2] = Turn off" << endl;
		cout << "         [3] = Status" << endl;
		cout << "        [4] = Exit App" << endl;
		
		cout << "--------------------------------" << endl;
		cout << endl;
		
		cout << "Input your choice: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case 1:
			{
				if (light_on == 0) // light is off, turn on
				{
					light_on = 1;
					cout << "BEDROOM LIGHT ON" << endl;
					cout << endl;
				}
				else // light is already on, ignore command
				{
					cout << "BEDROOM LIGHT ALREADY ON" << endl;
					cout << endl;
				}
			}
			break;

			case 2:
			{
				if(light_on == 1) //light on, turn off
				{
					light_on = 0;
					cout << "BEDROOM LIGHT OFF" << endl;
					cout << endl;
				}
				else// light already off, ignore command
				{
					cout << "BEDROOM LIGHT ALREADY OFF" << endl;
					cout << endl;
				}
			}
			break;

			case 3://is light on or off
			{
				if(light_on == 1)
				{
					cout << "Status: LIGHT IS ON" << endl;
					cout << endl;
				}
				else
				{
					cout << "Status: LIGHT IS OFF" << endl;
					cout << endl;
				}
			}
			break;

			case 4:
			{
				cout << "CLOSING APP" << endl;
			}
			break;

			default:
			{
				cout << "INVALID INPUT" << endl;
			}
		

		
		}

	} while (choice != 4);

	return 0;
}