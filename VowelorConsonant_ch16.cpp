#include <iostream>
using namespace std;

char letter;

int main()
{
	cout << "Input a letter: ";
	cin >> letter;

	if (letter >= 'a' && letter <= 'z')
	{
		switch (letter)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cout << endl;
				cout << "Vowel" << endl;
				break;

			default:
				cout << endl;
				cout << "Consonant" << endl;
		}
	


	}
	else
	{
		cout << endl;
		cout << "Invalid input." << endl;
	}



	return 0;
}