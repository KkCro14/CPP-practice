#include <iostream>
using namespace std;

int total_fee;

int main()
{
	int books; // how many books
	int days; //how many days late
	int fee;

	cout << "How many books are you returning?: ";
	cin >> books;
	cout << endl;

	
	for (int b = 1; b <= books; b++)// repeat question for each book
	{
		cout << "How many days after the due date are you turning in this book?: ";
		cin >> days;

		if (days < 1)// 0 days late
		{
			cout << "You have acquired no late charge for this book. " << endl;
			int fee = 0;
			int charge = (days * fee);
			cout << "Fee for this book: $" << charge << endl;
			cout << endl;
			total_fee = total_fee + charge;
		}
		else if (days >= 1 && days <= 5)// 1-5 days late
		{
			cout << "You have acquired a late charge of $1 per late day for this book. " << endl;
			int fee = 1;
			int charge = (days * fee);
			cout << "Fee for this book: $" << charge << endl;
			cout << endl;
			total_fee = total_fee + charge;
		}
		else if (days >= 6 && days <= 10)// 5-10 days late
		{
			cout << "You have acquired a late charge of $2 per late day for this book. " << endl;
			int fee = 2;
			int charge = (days * fee);
			cout << "Fee for this book: $" << charge << endl;
			cout << endl;
			total_fee = total_fee + charge;
		}
		else//more than 10 days late
		{
			cout << "You have acquired a late charge of $5 per late day for this book. " << endl;
			
			int fee = 5;
			int charge = (days * fee);
			cout << "Fee for this book: $" << charge << endl;
			cout << endl;
			total_fee = total_fee + charge;
		}

	}
		
	cout << "Your total fee for all books is: $" << total_fee;
	cout << endl;

	

	return 0;
}