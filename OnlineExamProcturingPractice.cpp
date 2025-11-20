
//if student has mic and camera on, allow exam, if not print "denied"
#include <iostream>
using namespace std;

int main()
{
	bool microphone = true; //true for on, false for off.
	bool camera = true; 
	string start;

	cout << "Start test? (Yes or No):" << endl;
	cin >> start;

	if (start == "yes" && microphone && camera)
	{
		cout << "ACCESS GRANTED. BEGIN EXAM." << endl;
	}

	else
	{
		cout << "ACCESS DENIED" << endl;
	}

	return 0;
}