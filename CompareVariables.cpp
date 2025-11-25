#include <iostream>
using namespace std;


int main()
{

    int num1;
    int num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: "; 
    cin >> num2;
    cout << endl;

    int* pnum1 = &num1;
    int* pnum2 = &num2;

    if(*pnum1 > *pnum2)
    {
        cout << "The first number (" << *pnum1 << ") is larger." << endl;
        cout << endl;

    }
    else if(*pnum1 < *pnum2)
    {
        cout << "The second number(" << *pnum2 << ") is larger." << endl;
        cout << endl;
    }
    else{
        cout << "The numbers are equal." << endl;
        cout << endl;
    }


    return 0;
}