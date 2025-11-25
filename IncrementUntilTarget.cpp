#include <iostream> 
using namespace std;


int main()
{
    //declare variables
int target;
int current = 0;

//gain user target
cout << "Enter target number: ";
cin >> target;

int *ptr = &current; //pointer to variable (current)

while (*ptr < target) //loop while current is less than target
{
    (*ptr)++;
    cout << "Current value: " << *ptr << endl;
}

cout << "Target reached!" << endl;

return 0; 
}