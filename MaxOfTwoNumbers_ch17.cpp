#include <iostream>
using namespace std;

int find_max(int number_one, int number_two);

int main()
{
	int num1;
	int num2;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	int larger = find_max(num1, num2);

	cout << "The larger number is: " << larger << endl;

	return 0;
}

int find_max(int number_one, int number_two)
{
	if (number_one < number_two)
	{
		return number_two;
	}
	else
	{
		return number_one;
	}
}