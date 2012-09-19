/*
	Author: CliffHanger
	C++, Assignment 5 - Formatting Outputs
	9/19/12
*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variable for calcultions
	int intNumber = 32;
	float fltnumber = 42.98765;
	int ColumnWidth = 10;

	//Display to the user the hx and octal values
	cout << "The hex of 32 is " << showbase << hex << intNumber << endl;
	cout << "The octal of 32 is " << showbase << oct << intNumber << endl;
	cout << endl;

	//Display the doubles with fixed precision, staring with three, then 4, 5, and 6, each on a newline
	cout << fixed << setprecision(3);
	cout << "|" << right << setw(ColumnWidth) << fltnumber << "|" << endl;
	cout << fixed << setprecision(4);
	cout << "|" << right << setw(ColumnWidth) << fltnumber << "|" << endl;
	cout << fixed << setprecision(5);
	cout << "|" << right << setw(ColumnWidth) << fltnumber << "|" << endl;
	cout << fixed << setprecision(6);
	cout << "|" << right << setw(ColumnWidth) << fltnumber << "|" << endl;
	cout << endl; //Space between outputs

	//Set column size for each cell, no endl
	ColumnWidth = 5;
	cout << "|" << setw(ColumnWidth) << showbase << dec << intNumber << "|";
	ColumnWidth = 10;
	//set fltnumber to 2 decimal places
	cout << fixed << setprecision(2);
	cout << setw(ColumnWidth) << fltnumber << "|";

	_getch();
	return 0;


	/*
		I didn't see any difference in running the program.
		Float and doubles are similar data types, but the differences 
		is doubles hold a greater range of values with there increased byte count.
	*/
}

