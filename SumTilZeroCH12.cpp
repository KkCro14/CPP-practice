#include <iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;

	do
	{
		cout << "Enter a number(0 to stop): ";
		cin >> num;
		cout << endl;

		sum = sum + num;

	} while (num != 0);//if number is greater than 0

	cout << "You're sum is: " << sum << endl;


	return 0;
}