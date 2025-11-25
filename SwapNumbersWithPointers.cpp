#include <iostream>
using namespace std;

int main()
{
    //declaring variables
   int num1 = 5;
   int num2 = 10;

   //output before swap
   cout << endl;
   cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
   cout << endl;
    
   //swapping using pointers?
   int *ptr1 = &num2;
   int *ptr2 = &num1;

   //output after swap
   cout << "After swap: num1 = " << *ptr1 << ", num2 = " << *ptr2 << endl;
   cout << endl;

   





    return 0;
}