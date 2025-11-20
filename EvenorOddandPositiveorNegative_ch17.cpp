#include <iostream>
using namespace std;

int check_even(int number);

int check_pos(int number);

int main()
{
	int num;

	cout << "Input a number: ";
	cin >> num;

	if (check_even(num) == 1)
	{
		cout << num << " is Even." << endl;
	}
	else
	{
		cout << num << " is Odd" << endl;;
	}
	
	if (check_pos(num) == 1)
	{
		cout << num << " is Positive." << endl;
	}
	else
	{
		cout << num << " is Negative." << endl;
	}



	return 0;
}


int check_pos(int number)
{
	if (number > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int check_even(int number)
{
	if (number % 2 == 0)
	{
		return 1;//even
	}
	else
	{
		return 0;//odd
	}

}

