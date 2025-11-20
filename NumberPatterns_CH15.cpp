#include <iostream>
using namespace std;

int main()
{
	for (int row = 1; row <= 4; row++)//numbers of rows
	{
		for (int col = 1; col <= row; col++) // controls numbers printed in each row
		{
			cout << col << " ";

		}
		cout << endl;//move to next line after each row
	}


	return 0;
}