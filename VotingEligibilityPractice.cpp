#include <iostream>
using namespace std;

int main()
{
	//defining variables
	string citizenship;
	int age; 

	cout << "Are you a US citizen?" << endl; // citizenship eligibility
	cin >> citizenship;
	cout << endl;

	if (citizenship == "yes") //move to next question if you are a citizen
	{
		cout << "Input your age: " << endl; // age eligibility
		cin >> age;
		cout << endl;

		if (age >= 18) // if not 18, no vote
		{
			cout << "You may place your vote." << endl;
		}
		else
		{
			cout << "You must be 18 years or older to vote." << endl;
		}
	}
	else //if not a citizen, no vote
	{
		cout << "You must be a citizen to vote." << endl;
	}

	cout << endl;

	return 0;
}