#include <iostream>
using namespace std;


int main()
{

int num1 = 5;
int num2 = 9;

int* pointer1;
pointer1 = &num1;

int* pointer2;
pointer2 = &num2;

cout << endl;
cout << "Value of num1: " << num1 << endl;
cout << "Address of num1: " << &num1 << endl;
cout << "Pointer1 stores: " << &num1 << endl;
cout << "Value at address: " << num1 << endl;

cout << endl;

cout << "Value of num2: " << num2 << endl;
cout << "Address of num2: " << &num2 << endl;
cout << "Pointer2 stores: " << &num2 << endl;
cout << "Value at address: " << num2 << endl;
cout << endl;


    return 0;
}