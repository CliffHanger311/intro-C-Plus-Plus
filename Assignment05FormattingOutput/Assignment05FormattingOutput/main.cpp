#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variable for calcultions
	int intNumber = 32;
	double dblnumber = 42.98765;

	//Display to the user the hx and octal values
	cout << "The hex of 32 is " << endl;
	cout << "The octal of 32 is " << endl;
	cout << endl;

	//Display the doubles with fixed precision, each line is a different decimal place, with proper formatting
	cout << "|" << dblnumber << "|" << endl;
	cout << "|" << dblnumber << "|" << endl;
	cout << "|" << dblnumber << "|" << endl;
	cout << "|" << dblnumber << "|" << endl;
	cout << endl;

	//display the finally values in one line, after a space


	_getch();
	return 0;
}

