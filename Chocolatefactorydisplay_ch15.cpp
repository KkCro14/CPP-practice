#include <iostream>
using namespace std;

int main()
{
	int rows;// number of rows
	int cols;//number of columns
	int dark = 0; //chocolate counters
	int milk = 0;
	int white = 0;


	//input 
	cout << "Enter number of rows:";
	cin >> rows;
	cout << endl;

	cout << "Enter number of columns: ";
	cin >> cols;
	cout << endl;

	cout << "------- Chocolate tray: -------" << endl;
	cout << "(D = dark, M = milk, W = white)" << endl;
	cout << "-------------------------------" << endl;
	cout << endl;

	//nested loops or display
	for (int row = 1; row <= rows; row++)
	{
		for (int col = 1; col <= cols; col++)
		{
			if (col % 2 == 0)
			{
				cout << "D ";
				dark = dark + 1;
			}
			else if (row % 2 == 0)
			{
				cout << "M ";
				milk = milk + 1;
			}
			else
			{
				cout << "W ";
				white = white + 1;
			}
		}
		cout << endl; // new line after each row
	}

	int total = dark + white + milk;
	
	cout << endl;
	cout << "------- Summary -------" << endl;
	cout << "Dark chocolates: " << dark << endl;
	cout << "Milk Chocolates: " << milk << endl;
	cout << "White Chocolates " << white << endl;
	cout << "Total Chocolates: " << total << endl;
	cout << "-----------------------" << endl;

	return 0;
}