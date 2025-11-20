#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pi = 3.14159265359;

	//how many digits of pi to show in each row (total digits)
	cout << setprecision(3) << pi << endl;
	cout << setprecision(5) << pi << endl;
	cout << setprecision(10) << pi << endl;
	cout << setprecision(12) << pi << endl;
	cout << endl;

	//how many digits of pi to show AFTER the decimal
	cout << fixed << setprecision(4) << pi << endl;
	cout << fixed << setprecision(6) << pi << endl;
	cout << fixed << setprecision(11) << pi << endl;

	return 0;
}