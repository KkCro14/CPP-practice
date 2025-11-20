#include <iostream>
using namespace std;

int main()
{
	int day_number;
	cout << "Enter day number (1Monday, 2Tuesday, 3Wednesday, 4Thursday, 5Friday): ";
	cin >> day_number;
	cout << endl;44


	switch (day_number)
	{
	case 1:
		cout << "Monday\n";
		break;

	case 2:
		cout << "Tuesday\n";
		break;

	case 3:
		cout << "Wednesday\n";
		break;

	case 4: 
		cout << "Thursday\n";
		break;

	case 5: 
		cout << "Friday\n";
		break;

	default:
		cout << "Invalid day number\n";
	}



	return 0;
}