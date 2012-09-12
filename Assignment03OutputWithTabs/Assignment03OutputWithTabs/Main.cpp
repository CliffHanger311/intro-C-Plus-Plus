#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{  
	//declare variables
	float Part01 = 6.34;
	float Part02 = 8.92;
	float Part03 = 65.40;
	float Part04 = 103.45;
	
	int ColumnOne = 15;
	int ColumnTwo = 1;
	int ColumnThree = 10;


	cout << left << setw(ColumnOne) << "PART NO." 
		<< setw(ColumnTwo) << " " 
		<< right << "PRICE" << endl;

	cout << left << setw(ColumnOne) << "T1267"
		<< setw(ColumnTwo) << "$" 
		<< right << setw(ColumnTwo) << Part01 << endl;

	cout << left << setw(ColumnOne) << "T1300"
		<< setw(ColumnTwo) << "$" 
		<< right << setw(ColumnTwo) << Part02 << endl;

	cout << left << setw(ColumnOne) << "T2401"
		 << setw(ColumnTwo) << "$" 
		<< right << setw(ColumnTwo) << Part03 << endl;

	cout << left << setw(ColumnOne) << "T4482"
		 << setw(ColumnTwo) << "$" 
		<< right << setw(ColumnTwo) << Part04;




	_getch();
	return 0;
}