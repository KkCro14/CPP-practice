#include <iostream>
using namespace std;

int find_sum(int num1, int num2);
int find_product(int num1, int num2);

int main()
{
	int input1;
	int input2;

	cout << "Please enter two numbers: ";
	cin >> input1 >> input2;

	int final_sum = find_sum(input1, input2);
	int final_product = find_product(input1, input2);

	cout << "The sum of " << input1 << " and " << input2 << " is " << final_sum << endl;
	cout << "The product of " << input1 << " and " << input2 << " is " << final_product << endl;


	return 0;
}

int find_sum(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;

}

int find_product(int num1, int num2)
{
	int product = num1 * num2;
	return product;


}