#include <iostream>
using namespace std;


int readings_count = 0;

int main()
{
	
	cout << "What is today's temperature?: ";
	cin >> readings_count;

	if (readings_count < 15)
	{
		cout << endl;
		cout << "It is cold outside." << endl;
	}
	else if(readings_count >= 15 && readings_count <= 29)
	{
		cout << endl;
		cout << "It is warm outside." << endl;
	}
	else
	{
		cout << endl;
		cout << "It is hot outside. " << endl;
	}


	return 0;
}