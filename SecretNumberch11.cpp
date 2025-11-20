#include <iostream>
using namespace std;

int main()
{
	int guess;
	int secretnumber = 7;

	cout << "Input guess: ";
	cin >> guess;

	while (guess != 7)
	{
		cout << "WRONG! TRY AGAIN LOSER: ";
		cin >> guess;
	}

	cout << "YAYYY YOU DID IT!" << endl;

	return 0;
}