#include <iostream>
using namespace std;


int main()
{
    int num1;
    int num2;

    cout << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum = *ptr1 + *ptr2;

    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << endl;


    return 0;
}