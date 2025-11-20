#include <iostream>
using namespace std;

int main()
{
	string answer;//variable declaration

	cout << "Do you want to turn the page?(yes/no): ";
	cin >> answer;

	while (answer == "yes" || answer == "Yes") //turn page if yes
	{
		cout << "You moved to the next page. " << endl;
		cout << endl;
		cout << "Do you want to turn the page again?: ";
		cin >> answer;
		cout << endl;
	}
	cout << endl;
	cout << "You closed the book"; //if anything but yes, the book will close

	return 0;
}