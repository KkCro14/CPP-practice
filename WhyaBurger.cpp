//Whya burger if statement practice

#include <iostream>
using namespace std;

int main()
{
	double meal = 9.99;
	double burger = 5.69;
	double drink = 1.99;
	double fries = 1.99;
	double total = burger + drink + fries;

	if (total > meal)
	{
		cout << "MEAL IS CHEAPER!" << endl;
	}

	else
	{
		cout << "MEAL IS MORE EXPENSIVE!" << endl;
	}

	return 0;
}
