// QuickReviewCh5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//declare variable
	int number;

	//ask the user for the number
	cout << "Enter a number: ";
	cin >> number;
	cout << endl;

	if (number > 0) // check if the number is positive
	{
		cout << "The number is positive." << endl;
	}

	else if (number < 0) //  check if the number is negative
	{
		cout << "The number is negative." << endl;
	}

	else // check if the number is 0
	{
		cout << "Zero. The number is neither positive nor negative." << endl;
	}

	return 0;
}