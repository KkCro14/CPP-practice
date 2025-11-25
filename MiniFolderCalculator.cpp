#include <iostream>
using namespace std;


int main()
{

    int num1;
    int num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int *ptr = &num1;
    int *ptr2 = &num2;

    cout << "Input operation(*, /, +, -): ";
    cin >> operation;

    switch(operation)
    {
    case '+':
        cout << "Result: " << *ptr + *ptr2 << endl;
        break;
    case '-':
        cout << "Result: " << *ptr - *ptr2 << endl;
        break;
    case '*':
        cout << "Result: " << (*ptr) * (*ptr2) << endl;
        break;
    case '/':
       
        cout << "Result: " << (*ptr) / (*ptr2) << endl;
     
        break;
    default:
        cout << "Invalid operation!" << endl;
        break;
    }


    return 0;
}