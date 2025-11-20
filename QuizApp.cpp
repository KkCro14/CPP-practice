
#include <iostream>
using namespace std;

int main()
{
	string answer_1;
	string answer_2;
	string answer_3;


	//question1
	cout << "QUESTION ONE:" << endl;
	cout << "What color do you get when you mix red and blue?" << endl;
	cin >> answer_1;

	if (answer_1 == "purple")
	{
		cout << "CORRECT" << endl;
		cout << endl;
		
		cout << "QUESTION 2" << endl;
		cout << "what is 1 + 1?" << endl;
		cin >> answer_2;

		if (answer_2 == "2")
		{
			cout << "CORRECT" << endl;
			cout << endl;

			cout << "QUESTION 3" << endl;
			cout << "What is 2+2?" << endl;
			cin >> answer_3;

			if (answer_3 == "4")
			{
				cout << "YOU WIN!" << endl;
			} 
			else
			{
				cout << "GAME OVER!" << endl;
			}
		}
		else
		{
			cout << "GAME OVER!" << endl;
		}
	}
	else
	{
		cout << "GAME OVER!" << endl;
	}
	return 0;
}

