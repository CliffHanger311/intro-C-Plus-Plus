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
	
	int ColumnWidth = 15;

	cout << left << setw(ColumnWidth) << "PART NO." 
		<< right << "PRICE" << endl;
	cout << left << setw(ColumnWidth) << "T1267"
		<< right << "$" << Part01 << endl;
	cout << left << setw(ColumnWidth) << "T1300"
		<< right << "$" << Part02 << endl;
	cout << left << setw(ColumnWidth) << "T2401"
		<< right << "$" << Part03 << endl;
	cout << left << setw(ColumnWidth) << "T4482"
		<< right << "$" << Part04;




	_getch();
	return 0;
}