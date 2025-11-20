//letter grade assigning

#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << "GRADE CALCULATOR" << endl;
	cout << endl;

	cout << "Input your score: ";
	cin >> score;
	cout << endl;

	if (score >= 90) // A grade
	{
		cout << "You scored an A! ;)" << endl;
	}

	else if (score >= 80) //B grade
	{
		cout << "You scored a B! :)" << endl;
	}
	
	else if (score >= 70) //C grade
	{
		cout << "You scored a C! :/" << endl;
	}

	else if (score >= 60) //D grade
	{
		cout << "You scored a D! :|" << endl;
	}

	else //F grade
	{
		cout << "You scored an F. :(" << endl;
	}

	return 0;
}