#include <iostream>
using namespace std;

int main()
{
	string ID;
	bool time = false;

	cout << "Do you have your ID? ANSWER BELOW(yes or no)" << endl;
	cin >> ID;
	cout << endl;
	

	if (ID == "yes" and time == true)
	{
		cout << "ACCESS GRANTED" << endl;
	}

	else
	{
		cout << "ACCESS DENIED" << endl;
	}

	return 0;
}