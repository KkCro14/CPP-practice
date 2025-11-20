#include <iostream>
using namespace std;

int main()
{
	int number = 1;//star counting from 1
	int end_number;

	cout << "Input number: ";//input final number
	cin >> end_number;

	while (number <= end_number) //condition check, dont go above input number
	{
		cout << number << endl; //print number
		number = number + 1; // increase number by 1
	}

	return 0;
}