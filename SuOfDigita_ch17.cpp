#include <iostream>
using namespace std;

int add_number(int number);


int main()
{
	int value;

	cout << "Enter a number: ";
	cin >> value;

	int result = add_number(value);
	cout << "Sum of digits is: " << result << endl;

	return 0;
}

int add_number(int number)
{
	int result = 0;

	while (number > 0)
	{
		int digit = number % 10;
		result += digit;
		number = number / 10;
	}
	return result;
}