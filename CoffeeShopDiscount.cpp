//building a coffee shop discount system

#include <iostream>
using namespace std;

int main()
{
	double total;

	cout << "Input Total: " << endl;
	cin >> total;
	cout << endl;

	if (total >= 20)
	{
		cout << "You're total is: $" << total << "." << endl;
		cout << "Congratulations! You may receive a free cookie!" << endl;
	}

	else
	{
		cout << "You're total is: $" << total << "." << endl;
		cout << "Thank you for shopping!" << endl;
	}

	return 0;
}

