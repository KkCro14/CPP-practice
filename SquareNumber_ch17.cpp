#include <iostream>
using namespace std;

int square_number(int number);

int main() 
{

	int input;

	cout << "Enter an integer: ";
	cin >> input;

	int squared_input = square_number(input);

	cout << "The square of " << input << " is " << squared_input << endl;

	return 0;
}

int square_number(int number)
{
	int result = number * number;
	return result;
}