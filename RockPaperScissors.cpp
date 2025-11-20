#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	srand(time(0));
	string user;
	string computer;

	cout << "ROCK(0), PAPER(1), SCISSORS(2), SHOOT!" << endl;
	cout << endl;

	cout << "What is your choice?: ";
	cin >> user;
	cout << endl;

	if (user == "rock" or user == "paper" or user == "scissors")
	{



		int random_value = rand() % 3;

		if (random_value == 0)
		{
			computer = "rock";
		}

		else if (random_value == 0)
		{
			computer = "paper";
		}

		else
		{
			computer = "scissors";
		}

		cout << "You vs. Computer" << endl;
		cout << user << " vs. " << computer << endl;
		cout << endl;



		if (user == computer)
		{
			cout << "IT'S A TIE!" << endl;
			cout << endl;
		}

		else
		{
			if (user == "rock")
			{
				if (computer == "scissors")
				{
					cout << "YOU WIN!" << endl;
					cout << endl;
				}

				else
				{
					cout << "YOU LOSE!" << endl;
					cout << endl;
				}
			}

			else if (user == "paper")
			{
				if (computer == "rock")
				{
					cout << "YOU WIN!" << endl;
					cout << endl;
				}

				else
				{
					cout << "YOU LOSE!" << endl;
					cout << endl;
				}
			}

			else if (user == "scissors")
			{
				if (computer == "paper")
				{
					cout << "YOU WIN!" << endl;
					cout << endl;
				}

				else
				{
					cout << "YOU LOSE!" << endl;
					cout << endl;
				}
			}


		}
	}
	else
	{
		cout << "Invalid Input" << endl;
		cout << endl;
	}
	

	return 0;
}


