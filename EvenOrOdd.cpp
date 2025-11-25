#include <iostream>
using namespace std;



int main()
{

    int num;

    cout << "Enter a number: ";
    cin >> num;

    int *ptr = &num;


    if( *ptr % 2 == 0)
    {
        cout << *ptr << " is Even." << endl;

    }
    else 
    {
        cout << *ptr << " is Odd. " << endl;
    }




    return 0;
}