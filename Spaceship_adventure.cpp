// Spaceship_adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//creates variables
	int x1_variable;
	int y1_variable;
	int z1_variable;
	int x2_variable;
	int y2_variable;
	int z2_variable;

	double distance;
	double fuel_needed;
	double fuel_rate;
	double midpoint_x;
	double midpoint_y;
	double midpoint_z;

	x1_variable = 16;
	y1_variable = 17;
	z1_variable = 24;
	x2_variable = 6;
	y2_variable = 7;
	z2_variable = 9;
	fuel_rate = 2.5;

	distance = sqrt(pow((x2_variable - x1_variable), 2) + pow((y2_variable - y1_variable), 2) + pow((z2_variable - z1_variable), 2));
	fuel_needed = distance * fuel_rate;
	midpoint_x = ((x1_variable + x2_variable) / 2);
	midpoint_y = ((y1_variable + y2_variable) / 2);
	midpoint_z = ((z1_variable + z2_variable) / 2);

	cout << "Distance: " << distance << endl;
	cout << "Fuel needed: " << fuel_needed << endl;
	cout << "Midpoint: (" << midpoint_x << ", " << midpoint_y << ", " << midpoint_z << ")" << endl;

	return 0;
}

