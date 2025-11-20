#include <iostream>
using namespace std;

int main()
{
	int number1;
	int number2;
	int result;
	char operation;

	cout << "Enter first number: ";
	cin >> number1;

	cout << "Enter Operation: ";
	cin >> operation;
	



	cout << "Enter second number: ";
	cin >> number2;

	switch (operation)
	{
		case '+':
			result = number1 + number2;
			//prints number1 + number 2
			cout << endl;
			cout << number1 << " " << operation << " " << number2 << ": " << result;
			cout << endl;
			break;

		case '-':
			result = number1 - number2;
			//prints first number - second number
			cout << endl;
			cout << number1 << " " << operation << " " << number2 << ": " << result;
			cout << endl;
			break;
		
		case '*':
			result = number1 * number2;
			//prints number1 * number 2
			cout << endl;
			cout << number1 << " " << operation << " " << number2 << ": " << result;
			cout << endl;
			break;

		case '/':
			result = number1 / number2;
			//prints number1 / number 2
			cout << endl;
			cout << number1 << " " << operation << " " << number2 << ": " << result;
			cout << endl;
			break;


		default:
		
			cout << "INVALID" << endl;
		
	}



	return 0;
}