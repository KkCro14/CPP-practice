#include <iostream>
using namespace std;

int main()
{
	int row = 1;

	while (row <= 8)
	{
		int column = 1;

		while (column <= row)
		{
			cout << "*";
			column = column + 1;
		}

		row = row + 1;
		cout << endl;
		

	}


	return 0;
}