#include <iostream>
using namespace std;

int main()
{
	int score;
	int marks;
	string sports;

	cout << "University Admissions" << endl;
	cout << endl;

	cout << "Input your score: ";
	cin >> score;
	cout << endl;

	cout << "Input marks: ";
	cin >> marks;
	cout << endl;

	cout << "Input Sports (True or False): ";
	cin >> sports;
	cout << endl;


	if (score >= 80 and marks >= 85)
	{
		cout << "Admissions in Honors Program" << endl;
	}

	else if (score >= 60 and marks >= 70)
	{
		cout << "Regular Admissions" << endl;
	}

	else if (marks >= 60 and sports == "true")
	{
		cout << "Admissions under sports quota" << endl;
	}

	else
	{
		cout << "APPLICATION REJECTED" << endl;
	}

	return 0;
}