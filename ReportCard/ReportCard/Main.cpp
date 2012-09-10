#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	float Score01 = .95;
	float Score02 = 1;
	float Score03 = 0.05;
	float Average = (Score01 + Score02 + Score03) / 3;
	int ColumnOneWidth = 30;
	int ColumnTwoWidth = 10;
	int ColumnBorder = 5;

	//Set decimals to fixed decimal places(2)
	cout << fixed << setprecision(0);
	//cout <<setfill('.');

	//Display the information in columns with left/right alignment, line divides are columns
	//Table heading
	cout << left << setw(ColumnOneWidth) << "Assignments" 
		<< setw(ColumnBorder) << "  |  "
		<< right << setw(ColumnTwoWidth) << "Score" << endl;

	cout << "---------------------------------------------" << endl;

	//Table Body
	cout << left << setw(ColumnOneWidth) << "HelloWorld" 
		<< setw(ColumnBorder) << "  |  "
		<< right << setw(ColumnTwoWidth) << Score01 * 100 << endl;
	cout << left << setw(ColumnOneWidth) << "Miles Calculator" 
		<< setw(ColumnBorder) << "  |  "
		<< right << setw(ColumnTwoWidth) << Score02 * 100 << endl;
	cout << left << setw(ColumnOneWidth) << "String Formatting" 
		<< setw(ColumnBorder) << "  |  "
		<< right << setw(ColumnTwoWidth) << Score03 * 100 << endl;

	cout << "---------------------------------------------" << endl;

	//Table Footer
	cout << fixed << setprecision(2);
	cout << left << setw(ColumnOneWidth) << "Average" 
		<< setw(ColumnBorder) << "  |  "
		<< right << setw(ColumnTwoWidth) << Average * 100;

	getch();
	return 0;
}