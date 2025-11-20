#include <iostream>
using namespace std;

int main()
{
	int limit;

	cout << "Enter limit: ";
	cin >> limit;
	cout << endl;

	int total = 0;

	for (int i = 1; i <= limit; i++)
	{

		cout << i << " + " << total << " = " << total + i << endl;

		total = total + i;

		//cout << total;

		//cout << " = " << total << endl;
	}

	cout << "Sum = " << total << endl;


	return 0;
}