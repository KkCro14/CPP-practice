#include <iostream>
using namespace std;

int building_min = -2;
int building_max = 10;
int min_floor = 0;
int max_floor = 0;
int invalid_moves = 0;


int main()
{
	int current_floor = 0;
	char command;

	cout << "Input B to begin: ";
	cin >> command;
	cout << "(u = up, d = down, s = stay, q = quit) : " << endl;
	

	while (command != 'q')
	{
		cout << "Current floor: " << current_floor << endl;
		cout << "Input command : ";
		cin >> command;
		cout << endl;
		
		switch (command)
		{
		case 'u':
			if (current_floor < building_max)
			{
				current_floor = current_floor + 1;
				
				if (max_floor < current_floor)
				{
					max_floor = current_floor;
				}
			}
			else
			{
				
				cout << "Invalid. You are already on the top floor. Enter different command." << endl;
				invalid_moves = invalid_moves + 1;
			}
			break;

		case 'd':
			if (current_floor > building_min)
			{
				current_floor = current_floor - 1;

				if (max_floor > current_floor)
				{
					min_floor = current_floor;
				}
			}
			else
			{
				
				cout << "Invalid. You are already on the bottom floor. Enter different command." << endl;
				invalid_moves = invalid_moves + 1;
			}
			break;

		case 's':
			break;
		}
	}
	cout << "Simulation ended." << endl;
	cout << "Invalid moves: " << invalid_moves << endl;
	cout << "Highest floor traveled: " << max_floor << endl;
	cout << "Lowest floor traveled: " << min_floor << endl;
	cout << "Last floor: " << current_floor << endl;
	cout << endl;


	return 0;
}