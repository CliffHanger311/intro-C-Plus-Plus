#include <iostream>
#include <conio.h>
#include <string>
#include "Rectangle.h"

using namespace std;

int main()
{
	//Variable to hold user input
	int width;
	int height;
	Rectangle r;

	//Ask user for input, then set to variables
	cout << "Please enter the rectangle height: ";
	cin >> height;
	cout << endl << "Please enter the rectangle width: ";
	cin >> width;
	cout << endl;
		
	//Check limits of input, and set to rectangle
	r.setRec(height, width);
	
	//Output Results: Rectangle, Area, and Perimeter
	cout << r.toString();
	cout << endl << "Area: " << r.findArea(r);
	cout << endl << "Perimeter: " << r.findPerimeter(r);

	_getch();
	return 0;
}