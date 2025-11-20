#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	srand(time(0));
	int guess;
	int random = rand() % 100 + 1;

	

	cout << "WELCOME to the NUMBER GUESSING GAME!";
	cout << endl;
	
	cout << "I have chosen a number between 1 and 100.";

	cout << endl;
	cout << "ENTER YOUR GUESS: ";
	cin >> guess;
	cout << endl;

	while (guess != random)//if guess is lower than random  number
	{
		if (guess > random)
		{
			cout << "WRONG! TO HIGH LOSER! TRY AGAIN: ";
			cin >> guess;
		}
		else
		{
			cout << "WRONG! TO LOW! TRY AGAIN: ";
			cin >> guess;
		}

	}

	cout << endl;
	cout << "GOOD JOB! YOU GUESSED CORRECTLY!";	
	cout << endl;

}