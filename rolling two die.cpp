

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	
	//roll first dice
	int dice = (rand() % 6) + 1;
	cout << "First roll: " << dice << endl;

	//roll secoond dice
	int dice2 = (rand() % 6) + 1;
	cout << "Second roll: " << dice2 << endl;
	cout << endl;
		
	//sum of die
	int sum;
	sum = dice + dice2;
	cout << "Sum: " << sum;
	cout << endl;

	if (sum == 7 || sum == 11)// if sum is 7 or 11 print lucky
	{
		cout << "LUCKY" << endl;
	}

	if (dice == dice2) // if dice roll he same number print doubles
	{
		cout << "DOUBLES" << endl;
	}


	return 0;
}