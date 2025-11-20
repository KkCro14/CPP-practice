#include <iostream>
#include <string>
using namespace std;

int main()
{
	int type;
	int day;
	int hour;
	int base_copay;
	int total;
	int surcharge;
	char referral;
	int slot_time;
	string slot_day;
	string slot;
	int next_day;


	cout << "What kind of appointment are you trying to schedule?(1-checkup, 2-emergency, 3-specialist): ";
	cin >> type;
	cout << endl;


	switch (type)
	{
		case 1: //checkup
		{
			base_copay = 80;

			cout << "You are here to schedule a general checkup." << endl;
			cout << endl;

			cout << "What is today?(1-Mon, 2-Tues, ... , 7-Sun). Note that weekend appointments automatically add a $20 surcharge: ";
			cin >> day;
			cout << endl;

			cout << "What time is it? Note that clinic hours are between 9am and 4 pm(9-16): ";
			cin >> hour;
			cout << endl;

			cout << "Here is the next avaliable appointment: " << endl;
			cout << endl;

			if (day == 6 or day == 7) //weekdn appointment fee
			{
				surcharge = 20;
			}
			else
			{
				surcharge = 0;
			}

			if (hour < 9) // if before 9 am, schedule same day ay 9
			{
				switch (day)
				{
					case 1:
						slot_day = "Monday";
					break;

					case 2:
						slot_day = "Tuesday";
					break;

					case 3:
						slot_day = "Wednesday";
					break;

					case 4: 
						slot_day = "Thursday";
					break;

					case 5:
						slot_day = "Friday";
					break;

					case 6:
						slot_day = "Saturday";
					break;

					case 7:
						slot_day = "Sunday";
					break;
				}

				slot = slot_day + " at 9:00";

				
			}

			if (hour >= 9 and hour < 17) //if during work hours, schedule fro next available appointment, an hour later
			{
				switch (day)
				{
				case 1:
					slot_day = "Monday";
					break;

				case 2:
					slot_day = "Tuesday";
					break;

				case 3:
					slot_day = "Wednesday";
					break;

				case 4:
					slot_day = "Thursday";
					break;

				case 5:
					slot_day = "Friday";
					break;

				case 6:
					slot_day = "Saturday";
					break;

				case 7:
					slot_day = "Sunday";
					break;
				}

				slot = slot_day + " at " + to_string(hour + 1) + string(":00");

				
				
			}


			if (hour >= 17) //if afer hours, schedule for next day
			{
				next_day = (day % 7) + 1;

				switch (next_day)
				{
				case 1:
					slot_day = "Monday";
					break;

				case 2:
					slot_day = "Tuesday";
					break;

				case 3:
					slot_day = "Wednesday";
					break;

				case 4:
					slot_day = "Thursday";
					break;

				case 5:
					slot_day = "Friday";
					break;

				case 6:
					slot_day = "Saturday";
					break;

				case 7:
					slot_day = "Sunday";
					break;
				}

				slot = slot_day + " at 9:00";

				
				
			}

		

		break;
		}
		
		case 2://emergency
		{
			base_copay = 250;

			cout << "PROCEED TO ER BAY IMMEDIATELY." << endl;
			cout << endl;

			if (hour >= 20 or hour < 6)
			{
				surcharge = 50;
			}
			else
			{
				surcharge = 0;
			}

			break;
		}

		case 3://specialist
		{
			base_copay = 150;

			cout << "You are here for a specialist appointment." << endl;
			cout << endl;

			cout << "What is today?(1-Mon, 2-Tues, ... , 7-Sun): ";
			cin >> day;
			cout << endl;

			cout << "What time is it? Before answering, note that specialist hours are between 10am and 4 pm(9-16): ";
			cin >> hour;
			cout << endl;

			cout << "Do you have a referral?(Y/N): ";
			cin >> referral;

			cout << "Here are the avaliable appointments: " << endl;
			cout << endl;

			if (referral == 'N' || referral == 'n')// referral or no referral?
			{
				surcharge = 40;
			}
			else
			{
				surcharge = 0;
			}

			if (hour < 10)//before 10 am, schedule appointment for 10 same say
			{

				if (day == 6 || day == 7)//if weekend, push to monday at 10
				{
					slot_day = "Monday";
				}
				else
				{

					switch (day)
					{
					case 1:
						slot_day = "Monday";
						break;

					case 2:
						slot_day = "Tuesday";
						break;

					case 3:
						slot_day = "Wednesday";
						break;

					case 4:
						slot_day = "Thursday";
						break;

					case 5:
						slot_day = "Friday";
						break;

					case 6:
						slot_day = "Saturday";
						break;

					case 7:
						slot_day = "Sunday";
						break;
					}
				}
				slot = slot_day + " at 10:00";


			}

			if (hour >= 10 and hour < 16) //during business hours schedle appointment for the next hour
			{

				if (day == 6 || day == 7)//if weekend, push to monday at 10
				{
					slot_day = "Monday";
				}
				else {

					switch (day)
					{
					case 1:
						slot_day = "Monday";
						break;

					case 2:
						slot_day = "Tuesday";
						break;

					case 3:
						slot_day = "Wednesday";
						break;

					case 4:
						slot_day = "Thursday";
						break;

					case 5:
						slot_day = "Friday";
						break;

					case 6:
						slot_day = "Saturday";
						break;

					case 7:
						slot_day = "Sunday";
						break;
					}
				}

				slot = slot_day + " at " + to_string(hour + 1) + string(":00");



			}

			if (hour >= 17)//after hours scheudle for next day at 10
			{
				next_day = (day % 7) + 1;

				if (day == 6 || day == 7)//if weekend, push to monday at 10
				{
					slot_day = "Monday";
				}
				else
				{
					switch (next_day)
					{
					case 1:
						slot_day = "Monday";
						break;

					case 2:
						slot_day = "Tuesday";
						break;

					case 3:
						slot_day = "Wednesday";
						break;

					case 4:
						slot_day = "Thursday";
						break;

					case 5:
						slot_day = "Friday";
						break;

					case 6:
						slot_day = "Saturday";
						break;

					case 7:
						slot_day = "Sunday";
						break;
					}
				}

				slot = slot_day + " at 10:00";



			}

			

			break;
		}
	}


	total = base_copay + surcharge;

	cout << slot << endl;
	cout << endl;

	cout << "Base copay: $" << base_copay << ".00" << endl;
	cout << "Surcharge: $" << surcharge << ".00" << endl;
	cout << "You're total is: $" << total << ".00" << endl;

	return 0;
}