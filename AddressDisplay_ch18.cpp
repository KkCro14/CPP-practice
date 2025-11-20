#include <iostream>
using namespace std;


int main()
{
	int number1 = 5;
	int number2 = 9;

	int* pointer1;
	pointer1 = &number1;

	int* pointer2;
	pointer2 = &number2;

	cout << "Value of first number: " << number1 << endl;
	cout << "Address of first number: " << &number1 << endl;
	cout << "Pointer1 stores: " << &number1 << endl;
	cout << "Value stored at address: " << number1 << endl;
	cout << endl;

	cout << "Value of second number: " << number2 << endl;
	cout << "Address of second number: " << &number2 << endl;
	cout << "Pointer2 stores: " << &number2 << endl;
	cout << "Value stored at address: " << number2 << endl;
	cout << endl;

	return 0;
}