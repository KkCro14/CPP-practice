#include <iostream>
using namespace std;

int main()
{
	int choice;
	double balance = 1000.00;
	double amount;

	do
	{
		cout << "======= ATM Menu =======" << endl;
		cout << "   [1] Deposit Money" << endl;
		cout << "   [2] Withdraw Money" << endl;
		cout << "   [3] Check Balance" << endl;
		cout << "   [4] Exit" << endl;
		cout << "========================" << endl;

		cout << "Enter choice: ";
		cin >> choice;

		switch (choice)
		{
			case 1:
			{
				cout << "Enter Deposit Amount: ";
				cin >> amount;

				balance = balance + amount;

				cout << "Deposited: " << amount << endl;
				cout << "New Balance: " << balance << endl;
				cout << endl;
			}
			break;

			case 2:
			{
				cout << "Enter Withdrawal Amount: ";
				cin >> amount;

				if (amount > balance)
				{
					cout << "DECLINED! INSUFFICENT FUNDS!" << endl;
				}
				else
				{
					balance = balance - amount;
					cout << "Withdrew: " << amount << endl;
					cout << "New Balance: " << balance << endl;
					cout << endl;
				}
			}
			break;

			case 3:
			{
				cout << "Current Balance: " << balance << endl;
				cout << endl;
			}
			break;

			case 4:
			{
				cout << "EXITING... Thank you for using our ATM." << endl;
			}
			break;

			default:
			{
				cout << "INVALID CHOICE" << endl;
			}
		}

	} while (choice != 4);

	return 0;
}