#include <iostream>
using namespace std;

int main()
{
	int number;
	int counter;


	cout << "Input number:";
	cin >> number;

	while (number >= 0)
	{
		cout << number << " ";
		number = number - 1;
	}

	return 0;
}