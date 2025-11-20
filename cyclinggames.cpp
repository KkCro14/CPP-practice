#include <iostream>
using namespace std;

int main()
{
	int players;
	int turn;

	//input
	cout << "Enter the number of Players: ";
	cin >> players;
	cout << endl;

	cout << "Enter current turn number: ";
	cin >> turn;
	cout << endl;

	//validate input
	if (players < 1 || turn < 1)
	{
		cout << "Invalid Input" << endl;
		cout << endl;
	}

	//compute turn
	int current_player = ((turn - 1) % players) + 1;

	//print
	cout << "Player " << current_player << "'s turn";
	cout << endl;


	return 0;
}