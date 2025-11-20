#include <iostream>
using namespace std;

int main()
{
	int num;
	do
	{
		

		cout << "Please insert a positive number: ";
		cin >> num;
		cout << endl;

	} while (num <= 0);//if number is greater than 0

	cout << "GOOD JOB" << endl;
	cout << endl;
	

	return 0;
}