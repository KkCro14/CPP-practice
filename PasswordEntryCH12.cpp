#include <iostream>
using namespace std;

int main()
{
	int code;

	
	do {

		cout << "Please insert your four digit secret code: ";
		cin >> code;
		cout << endl;
	} while (code != 9437);//if correct pin is not inputed
	

	cout << "ACCESS GRANTED!" << endl; //loop ends hen correct pin is inputed

	return 0;
}