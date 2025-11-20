#include <iostream>
using namespace std;

int cal_perimeter(int length, int width);
int cal_area(int length, int width);


int main()
{
	int length;
	int width;

	cout << "Input length of and width of rectangle: ";
	cin >> length >> width;

	int perimeter = cal_perimeter(length, width);
	int area = cal_area(length, width);

	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area << endl;

	return 0;
}

int cal_perimeter(int length, int width)
{
	int perimeter = (length * 2) + (width * 2);
	return perimeter;

}


int cal_area(int length, int width)
{
	int area = length * width;
	return area;
}