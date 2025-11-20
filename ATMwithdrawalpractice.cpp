// making a bank withdrwal simulator

#include <iostream>
using namespace std;

int main()
{
	double balance = 100;
	double amount;

	cout << "Withdrawal amount:" << endl;
	cout << "$";
	cin >> amount;
	cout << endl;
	

	if (amount <= balance)
	{
		cout << "Transaction complete. Please take your funds." << endl;
	}

	else
	{
		cout << "Transaction not complete, insufficent Funds." << endl;
	}

	return 0;
}