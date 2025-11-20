#include <iostream>
using namespace std;

int main()
{
	int pin;

	cout << "Please insert your four digit pin: ";
	cin >> pin;
	cout << endl;

	while (pin != 9437)//if correct pin is not inputed
	{
		cout << "ACCESS DENIED! TRY AGAIN: ";
		cin >> pin;
	}

	cout << "ACCESS GRANTED!" << endl; //loop ends hen correct pin is inputed

	return 0;
}