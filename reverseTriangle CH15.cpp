#include <iostream>
using namespace std;

int main()
{
	for (int row = 5; row >= 1; row--) //rows
	{
		for (int col = 1; col <= row; col++)//stars in each row
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}