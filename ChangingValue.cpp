#include <iostream>
using namespace std;

int main()
{

    int num; // declaration
    num = 25; //definition
    int* pointer1 = nullptr; //pointer declaration
    pointer1 = &num; //stores address of num

    *pointer1 = 40; //changing value of num 
    
    cout << endl;
    cout << "The value of num is: " << num << endl;
    cout << endl;


    return 0;
}