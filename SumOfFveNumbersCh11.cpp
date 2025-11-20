#include <iostream>
using namespace std;

int main()
{
	int counter = 1; //start counting from 1
	int totalsum = 0; //hold sum

	while (counter <= 5) //repeat as long as counter is 5 or less
	{
		totalsum = totalsum + counter;
		counter = counter + 1;
	}

	cout << "sum: " << totalsum << endl; //dsplay final sum

	return 0;
}