// Rhombus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double diagonal_1;
	double diagonal_2;
	diagonal_1 = 8.3;
	diagonal_2 = 6.2;

	double side = sqrt(pow(diagonal_1, 2) + pow(diagonal_2, 2)) / 2; 
	double perimeter = 4 * side;
	double area = (diagonal_1 * diagonal_2) / 2;

	cout << "The length of each side is: " << side << endl;
	cout << "The perimeter is: " << perimeter << endl;
	cout << "The area is:  " << area << endl;

	return 0;
}