#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//Declare variables for values of numbers, total, average, and column size
	float FirstNumber = 106.54;
	float SecondNumber = 89.532;
	float ThirdNumber = 98.76;
	float Total = FirstNumber + SecondNumber + ThirdNumber;
	float Average = Total / 3;
	int ColumnWidth = 15;

	//Display the numbers first, then the total, finally the average
	cout << left << setw(ColumnWidth) << "First Number " << right << setw(ColumnWidth) << FirstNumber << endl;
	cout << left << setw(ColumnWidth) << "Second Number " << right << setw(ColumnWidth) << SecondNumber << endl;
	cout << left << setw(ColumnWidth) << "Third Number " << right << setw(ColumnWidth) << ThirdNumber << endl;

	//Display line to seperate the numbers from the totals
	cout << "------------------------------" << endl;

	//display the total to 4 decimal places
	cout << fixed << setprecision(4);
	cout << left << setw(ColumnWidth) << "Total " << right << setw(ColumnWidth) << Total << endl;

	//display the total to 1 decimal places
	cout << fixed << setprecision(1);
	cout << left << setw(ColumnWidth) << "Average " << right << setw(ColumnWidth) << Average << endl;

	_getch();
	return 0;
}