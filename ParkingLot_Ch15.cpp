#include <iostream>
using namespace std;

int main()
{
	//rows and columns, cannot be changed
	const int rows = 4;
	const int cols = 4;

	//rates: 
	int ev_price; //electrical vehicle spots
	int handicap_price; // handicap spots
	int reg_price; // regular spots
	

	//counters:
	int ev_count = 0;
	int handicap_count = 0;
	int reg_count = 0;
	int total = 0;
	int revenue = 0;
	
	//spot varriables
	int occ_row1=0;
	int occ_col1=0;
	int occ_row2=0;
	int occ_col2=0;
	int occ_row3=0;
	int occ_col3=0;
	int occ_row4=0;
	int occ_col4=0;

	int occ_reg = 0;
	int occ_handicap = 0;
	int occ_ev = 0;

	cout << "Enter regular rates: ";
	cin >> reg_price;

	cout << "Enter handicap rates: ";
	cin >> handicap_price;

	cout << "Enter electric vehicle rates: ";
	cin >> ev_price;
	cout << endl;

	cout << "Enter four occupied spots(row,column): " << endl;

	cout << "Spot one: " << endl;
	cout << "Row(1-4): ";
	cin >> occ_row1;
	cout << "Column(1-4): ";
	cin >> occ_col1;
	cout << endl;
	
	cout << "Spot two: " << endl;
	cout << "Row(1-4): ";
	cin >> occ_row2;
	cout << "Column(1-4): ";
	cin >> occ_col2;
	cout << endl;

	cout << "Spot three: " << endl;;
	cout << "Row(1-4): ";
	cin >> occ_row3;
	cout << "Column(1-4): ";
	cin >> occ_col3;
	cout << endl;

	cout << "Spot four: " << endl;
	cout << "Row(1-4): ";
	cin >> occ_row4;
	cout << "Column(1-4): ";
	cin >> occ_col4;
	cout << endl;

	cout << "E = EV, H = Handicapped, X = Occupied, * = free" << endl;
	cout << endl;

	for (int row = 1; row <= rows; row++)
	{
		for (int col = 1; col <= cols; col++)
		{
			char spot_type = ' ';

			//original spot types(unoccupied)
			if (row == 1)
			{
				//handicap spot
				spot_type = 'H';
				handicap_count = handicap_count + 1;
			}
			else if (col == 3)
			{
				//ev spot
				spot_type = 'E';
				ev_count = ev_count + 1;
			}
			else
			{
				//reg spot
				spot_type = '*';
				reg_count = reg_count + 1;
			}

			//check if spot is occupied
			bool occupied =
				(row == occ_row1 && col == occ_col1) ||
				(row == occ_row2 && col == occ_col2) ||
				(row == occ_row3 && col == occ_col3) || 
				(row == occ_row4 && col == occ_col4);

			if (occupied)
			{
				cout << "X \t";

				if (spot_type == 'E')
				{
					occ_ev = occ_ev + 1;
					total = total + ev_price;
				}
				else if (spot_type == 'H')
				{
					occ_handicap = occ_handicap + 1;
					total = total + handicap_price;
				}
				else
				{
					occ_reg = occ_reg + 1;
					total = total + reg_price;
				}
			}
			else
			{
				cout << spot_type << "\t";
			}
		}
		cout << endl;
	}
	cout << endl;

	cout << "----- Summary -----" << endl;
	cout << "Handicap spots: " << handicap_count << " (occupied: " << occ_handicap << ") " << endl;
	cout << "Electric spots: " << ev_count << " (occupied: " << occ_ev << ") " << endl;
	cout << "Regular spots: " << reg_count << " (occupied: " << occ_reg << ") " << endl;
	cout << "Revenue: $" << total << endl;

	return 0;
}