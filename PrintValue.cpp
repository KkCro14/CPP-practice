#include <iostream>
using namespace std;

int main()
{

    int num = 6;
    int* ptr1;
    ptr1 = &num;

    cout << endl;
    cout << "Value of num: " << num << endl;
    cout << "address of num: " << &num << endl;
    cout << "Pointer stores: " << ptr1 << endl;
    cout << "Value of pointer: " << *ptr1 << endl;
    cout << endl;




    return 0;
}