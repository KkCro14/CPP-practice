#include <iostream>
using namespace std;

int main()
{
	int start_index;
	int offset;

	//input 
	cout << "enter start day: ";
	cin >> start_index;

	cout << "How many days to move forward: ";
	cin >> offset;
	cout << endl;


	if (start_index < 1 || start_index > 7 || offset < 0)
	{
		cout << "INVALID OUTPUT";
	}

	int new_index = ((start_index - 1 + offset) % 7) + 1; //find new day

	if (new_index == 1)
	{
		cout << "New Day: Monday";
		cout << endl;
	}

	else if (new_index == 2)
	{
		cout << "New Day: Tuesday";
		cout << endl;
	}

	else if (new_index == 3)
	{
		cout << "New Day: Wednesday";
		cout << endl;
	}

	else if (new_index == 4)
	{
		cout << "New Day: Thursday";
		cout << endl;
	}

	else if (new_index == 5)
	{
		cout << "New Day: Friday";
		cout << endl;
	}

	else if (new_index == 6)
	{
		cout << "New Day: Saturday";
		cout << endl;
	}

	else if (new_index == 7)
	{
		cout << "New Day: Sunday";
		cout << endl;
	}


	return 0;
}