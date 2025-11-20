#include <iostream>
using namespace std;

int main()
{
	for (int row = 1; row <= 3; row++)// how many rows
	{
		for (int col = 1; col <= 5; col++) //inner loop how many columns
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}