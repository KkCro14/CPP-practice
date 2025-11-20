#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	char again; // play again?

	do
	{
		srand(time(0));
		char play; //rock, paper, or scissors
		int wins = 0; // how many player wins
		int lose = 0; //computer wins
		int length = 0; //how many rounds
		int match = 0; //current round


		do
		{
			cout << endl;
			cout << "Enter odd match length: (3, 5, or 7): ";
			cin >> length;
			

			if (length != 3 && length != 5 && length != 7)
			{
				cout << "Invalid number of matches. try again." << endl;
			}
			else
			{
				int target = (length + 1) / 2;

				cout << "Goal: " << target << " wins. Good luck!!" << endl;
				cout << endl;
			}

		} while (length != 3 && length != 5 && length != 7);
		

		
			

		do
		{
			int random = rand() % 3;
			string computer;
			string player;

			cout << "Insert play below. (r = rock, p = paper, s = scissors)" << endl;

			cout << "ROCK! PAPER! SCISSORS! SHOOT! ....:";
			cin >> play;

			while (play != 'r' && play !='p' && play != 's')
			{
				cout << "Try again: ";
				cin >> play;
			}
				
			
			
				if (random == 0)
				{
					computer = "Rock";
				}

				if (random == 1)
				{
					computer = "Paper";
				}

				if (random == 2)
				{
					computer = "Scissors";
				}

				if (play == 'r')
				{
					player = "Rock";
				}

				if (play == 's')
				{
					player = "Scissors";
				}

				if (play == 'p')
				{
					player = "Paper";
				}

				
			
			
			cout << endl;
			cout << player << " vs. " << computer << endl;


			if (player == computer)
			{
				cout << "Its a tie! extra round!" << endl;
				cout << endl;

			}
			else
			{
				if (player == "Rock")
				{
					if (computer == "Scissors")
					{
						cout << "YOU WIN THIS ROUND!:)" << endl;
						cout << endl;

						wins = wins + 1;
						match = match + 1;
					}
					else
					{
						cout << "YOU LOSE THIS ROUND!:(" << endl;
						cout << endl;

						lose = lose + 1;
						match = match + 1;
					}
				}

				if (player == "Scissors")
				{
					if (computer == "Paper")
					{
						cout << "YOU WIN THIS ROUND!:)" << endl;
						cout << endl;

						wins = wins + 1;
						match = match + 1;
					}
					else
					{
						cout << "YOU LOSE THIS ROUND!:(" << endl;
						cout << endl;

						lose = lose + 1;
						match = match + 1;
					}
				}

				if (player == "Paper")
				{
					if (computer == "Rock")
					{
						cout << "YOU WIN THIS ROUND!:)" << endl;
						cout << endl;

						wins = wins + 1;
						match = match + 1;
					}
					else
					{
						cout << "YOU LOSE THIS ROUND!:(" << endl;
						cout << endl;

						lose = lose + 1;
						match = match + 1;
					}
				}

				cout << "Score: You vs. Computer : " << wins << " vs. " << lose << endl;
				cout << endl;
			}


		} while (match != length);

			
		if (wins > lose)
		{
			cout << "YOU WIN THE MATCH!" << endl;
			cout << endl;
		}
		else
		{
			cout << "YOU LOSE THE MATCH" << endl;
			cout << endl;
		}

		cout << "Do you want to play again? (y/n): ";
		cin >> again;

	} while (again == 'y' || again == 'Y');


	cout << "Have a good day! :)" << endl;
	cout << endl;

	

	return 0;
}