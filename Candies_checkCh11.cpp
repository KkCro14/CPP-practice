#include <iostream>
using namespace std;

int main()
{
	int total_candies = 5;
	int candies_eaten = 0;

	while (candies_eaten < total_candies)
	{
		candies_eaten = candies_eaten + 1; //eat one candy
		cout << "candies eaten NOM NOM NOM: " << candies_eaten << endl;
	}

	cout << endl;
	cout << "YOU ATE THEM ALL!";
	cout << endl;


	return 0;
}