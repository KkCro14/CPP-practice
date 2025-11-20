#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int transportation;
	int distance;
	int age;
	int day;
	int hour;
	int seating_class;
	int baggage;
	int base_fare;
	int special_fare;
	int surcharge_fare;
	int baggage_fee;
	int sum;
	int discount;
	int student;
	int member;
	int student_discount;
	int member_discount;

	cout << "Please fill in the following information: " << endl;
	cout << endl;

	cout << "Enter method of transportation(1-bus, 2-train, 3-flight): ";
	cin >> transportation;
	cout << endl;

	cout << "Age: ";
	cin >> age;

	cout << "Are you a student?(1-yes, 2-no): ";
	cin >> student;

	cout << "Are you a member?(1-yes, 2-no): ";
	cin >> member;

	cout << "Insert todays day(1-Monday...7-Sunday): ";
	cin >> day;

	cout << "Insert hour(0-23): ";
	cin >> hour;

	cout << "Enter distance traveling(km): ";
	cin >> distance;

	cout << "Enter baggage weight(kg): ";
	cin >> baggage;
	cout << endl;



	
	
	switch (transportation)
	{
		case 1: //bus
		{
			base_fare = (.5 * distance);
			cout << "You have chosen Bus, please fill out the information below:" << endl;
			cout << endl;

			//minimum of 2 dollar base fare
			if (base_fare < 2)
			{
				base_fare = 2;
			}

			//seating class. sleeper or original
			cout << "Enter desired class(2-sleeper or 1-original): ";
			cin >> seating_class;
			cout << endl;

			if (seating_class == 2)
			{
				special_fare = (base_fare * .20);
			}

			//peak hours fee. 7-10 and 17-20
			if (hour >= 7 && hour <= 10 or hour >= 17 && hour >= 20)
			{
				surcharge_fare = (base_fare * .15);
			}

			//baggage fee
			if (baggage >= 10)
			{
				baggage_fee = (1 * (baggage - 10));
			}

			//age discounts
			if (age <= 12)
			{
				discount = (base_fare * .5);
			}
			if (age >= 60)
			{
				discount = (base_fare * .3);
			}

			//student and member discounts
			if (student == 1 && distance > 20)
			{
				student_discount = (base_fare * .1);
			}
			if (member == 1)
			{
				member_discount = (base_fare * .05);
			}

			break;
		}

		case 2: //train
		{
			base_fare = (.8 * distance);
			cout << "You have chosen Train, please fill out information below: " << endl;
			cout << endl;

			//minimum of 5 dollar fare
			if (base_fare < 5)
			{
				base_fare = 5;
			}

			//class
			cout << "Enter desired class(1-original, 2-first): ";
			cin >> seating_class;
			cout << endl;

			if (seating_class == 2)
			{
				special_fare = (base_fare * .5);
			}

			//peak time fee
			if (hour >= 7 && hour <= 10 or hour >= 17 && hour >= 20)
			{
				surcharge_fare = (base_fare * .15);
			}

			//baggage fee
			if (baggage >= 10)
			{
				baggage_fee = (1 * (baggage - 10));
			}

			//age discounts
			if (age <= 12)
			{
				discount = (base_fare * .5);
			}
			if (age >= 60)
			{
				discount = (base_fare * .3);
			}

			//student and member discounts
			if (student == 1 && distance > 20)
			{
				student_discount = (base_fare * .1);
			}
			if (member == 1)
			{
				member_discount = (base_fare * .05);
			}

			break;
		}

		case 3:
		{
			base_fare = (2.5 * distance);

			cout << "You have chosen Flight, please fill out the information below: " << endl;
			cout << endl;

			if (base_fare < 50)
			{
				base_fare = 50;
			}

			cout << "Enter desired class(1-original, 2-business): ";
			cin >> seating_class;
			cout << endl;

			if (seating_class == 2)
			{
				special_fare = (base_fare * 1.20);
			}

			if (day == 6 or day == 7)
			{
				surcharge_fare = (base_fare * .1);
			}

			//baggage fee
			if (baggage >= 15)
			{
				baggage_fee = (3 * (baggage - 15));
			}

			//age discounts
			if (age <= 12)
			{
				discount = (base_fare * .5);
			}
			if (age >= 60)
			{
				discount = (base_fare * .3);
			}

			//student and member discounts
			if (student == 1 && distance > 20)
			{
				student_discount = (base_fare * .1);
			}
			if (member == 1)
			{
				member_discount = (base_fare * .05);
			}

			break;
		}
	}


	cout << "Receipt: " << endl;
	cout << endl;
	cout << "Base fare: " << base_fare << endl;
	cout << "Special fare: " << special_fare << endl;
	cout << "Time surcharge: " << surcharge_fare << endl;
	cout << "Baggage price: " << baggage_fee << endl;
	cout << "Discount: - " << discount << endl;
	cout << "Student discount: - " << student_discount << endl;
	cout << "Member discount: - " << member_discount << endl;
	cout << endl;

	sum = (base_fare + special_fare + surcharge_fare + baggage_fee - discount - student_discount - member_discount);
	cout << "Your total: " << sum << endl;
	cout << endl;

	






	return 0;
}