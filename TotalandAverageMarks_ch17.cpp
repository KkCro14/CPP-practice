#include <iostream>
using namespace std;

int find_total(int mark1, int mark2, int mark3);
int find_average(int mark1, int mark2, int mark3);

int main()
{

	int mark_1;
	int mark_2;
	int mark_3;

	cout << "Please input three marks: ";
	cin >> mark_1 >> mark_2 >> mark_3;

	int total = find_total(mark_1, mark_2, mark_3);
	int average = find_average(mark_1, mark_2, mark_3);

	cout << "Total: " << total << endl;
	cout << "Average: " << average << endl;



	return 0;
}

int find_total(int mark1, int mark2, int mark3)//returns total
{
	int sum = mark1 + mark2 + mark3;
	return sum;

}

int find_average(int mark1, int mark2, int mark3)//returns average
{
	int sum = mark1 + mark2 + mark3;
	int mean = sum / 3;
	return mean;


}