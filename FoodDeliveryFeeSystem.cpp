// food delivery system fee practice

#include <iostream>
using namespace std;

int main()
{
	double total; 
	double fee1 = 5;
	double fee2 = 10;

	cout << "Total: $";
	cin >> total;

	if (total >= 50)
	{
		cout << "You qualify for free delivery!" << endl;
		cout << "Your total is: $" << total;
	}
		
	if (total >= 20 && total <= 49)
	{
		cout << "You do not qualify for free delivery. A $5 fee has been added to your total." << endl;
		cout << "Your new total is: $" << total + fee1 << endl;
	}
	
	if (total <= 19)
	{
		cout << "You do not qualify for free delivery. A $10 fee has been added to your total." << endl;
		cout << "Your new total is: $" << total + fee2 << endl;
	}
	
	cout << endl;
	cout << "Have a wonderful day!";
	cout << endl;

	return 0;
}