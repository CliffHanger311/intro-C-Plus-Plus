#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#include <new>

using namespace std;

int main()
{
	//Local Variables for main
	int ArraySize = 0;
	int Total = 0;

	//Ask user how big the array is going to be
	cout << "How many numbers do you wish to enter? (Whole numbers only): ";
	cin >> ArraySize;
	cout << endl;

	//Create the array
	int *arrNumbers = new int[ArraySize];

	//Set array size to the number the user selected
	//arrNumbers[ArraySize];

	//For loop to assign values to array
	for (int i = 0; i < ArraySize; i++)
	{
		cout << "Please enter " << i << " number: ";
		cin >> arrNumbers[i];
	}

	//Create a space before output
	cout << endl;

	//First output line
	cout << "Your Array of numbers is: ";

	//For loop to display values to user
	for (int i = 0; i < ArraySize; i++)
	{
		 cout << arrNumbers[i] << " ";
		 Total += arrNumbers[i];
	}

	//Display total
	cout << endl << "The total value of the numbers is " << Total << endl;

	//Second output line
	cout << endl << "Your Array of numbers in reversed order: ";

	//For loop to display values to user
	for (int i = ArraySize - 1; i >= 0; i--)
	{
		 cout << arrNumbers[i] << " ";
	}

	//Delete array to free up memory
	delete[] arrNumbers;
	_getch();
	return 0;
}