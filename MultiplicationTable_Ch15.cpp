#include <iostream>;
using namespace std;


int main()
{
	for (int row = 1; row <= 5; row++)
	{
		for (int col = 1; col <= 10; col++)
		{
			int num = col * row;
			cout << num << "\t";
		}
		cout << endl;
	}

	return 0;
}