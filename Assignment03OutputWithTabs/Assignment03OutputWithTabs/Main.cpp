#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{  
	//declare variables for column size
	int ColumnOne = 15;
	int ColumnTwo = 10;
	
	cout << fixed << setprecision(2);

	//Display rows, first row left aligned with column one width
	//Second row right aligned with second column width
	cout << left << setw(ColumnOne) << "PART NO." 
		<< right << setw(ColumnTwo) << "PRICE" << endl;

	cout << left << setw(ColumnOne) << "T1267"
		<< right << setw(ColumnTwo) << "$6.34" << endl;

	cout << left << setw(ColumnOne) << "T1300"
		<< right << setw(ColumnTwo) << "$8.92" << endl;

	cout << left << setw(ColumnOne) << "T2401"
		<< right << setw(ColumnTwo) << "$65.40" << endl;

	cout << left << setw(ColumnOne) << "T4482"
		<< right << setw(ColumnTwo) << "$103.45";

	_getch();
	return 0;
}