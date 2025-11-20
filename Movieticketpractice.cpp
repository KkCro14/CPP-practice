#include <iostream>
using namespace std;

int main()
{
	int age = 72;


	if ((age <= 12) || (age >= 60))
	{
		cout << "DISCOUNT TICKET" << endl;
	}

	else
	{
		cout << "regular ticket" << endl;
	}

	return 0;

}