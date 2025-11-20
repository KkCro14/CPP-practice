// making a smart home ligth sensor

#include <iostream>
using namespace std;

int main()
{
	bool time = false; // is it nighttime
	bool motion = true; // is there motion

	if (time == true and motion == true) //If it is dark outside and there is motion, lights turn on
	{
		cout << "LIGHTS ON" << endl;
	}

	else
	{
		cout << "LIGHTS OFF" << endl;
	}
	return 0;
}