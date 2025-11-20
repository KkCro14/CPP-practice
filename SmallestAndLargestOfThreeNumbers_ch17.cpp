#include <iostream>
using namespace std;


int find_smallest(int num1, int num2, int num3);
int find_largest(int num1, int num2, int num3);

int main()
{
	int input1;
	int input2;
	int input3;

	cout << "Please input 3 numbers: ";
	cin >> input1 >> input2 >> input3;

	int smallest = find_smallest(input1, input2, input3);
	int largest = find_largest( input1, input2, input3);

	cout << "Smallest number: " << smallest << endl;
	cout << "Largest number: " << largest << endl;
	



	return 0;
}

int find_largest(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
	{
		return num1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}

int find_smallest(int num1, int num2, int num3)
{
	if (num1 < num2 && num1 < num3)
	{
		return num1;
	}
	else if (num2 < num1 && num2 < num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}