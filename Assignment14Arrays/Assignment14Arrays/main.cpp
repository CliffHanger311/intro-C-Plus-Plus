#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//Constant variable to hold size of arrays
	const int NumRows = 2;
	const int NumCols = 3;

	//First Array of variables
	 int arrFirst[NumRows][NumCols] = 
	 {
	  {16, 18, 23},
	  {54, 91, 11}
	 };

	 //Second Array of variables
	 int arrSecond[NumRows][NumCols] = 
	 {
	  {14, 52, 77},
	  {16, 19, 59}
	 };

	 //Array to hold answer variables
	 int arrThird[NumRows][NumCols];

	 //Display title of each array display
	 cout << setw(15) << left << "First" 
		 << setw(15) << left << "Second" 
		 << setw(15) << left << "Third" << endl;
	

	 //For loop to loop through rows
	 for (int i=0; i < NumRows; i++)
		 {
			 //First Array Loop
			 for (int j=0; j < NumCols; j++)
			 {
				 //Display the values of the first array
				 cout << setw(5) << left << arrFirst[i][j];

			 //End First Array loop
			 }

			 //Second Array loop
			 for (int j=0; j < NumCols; j++)
			 {
				 //Display the values of the second array
				 cout << setw(5) << left << arrSecond[i][j];

			 //End Second Array loop
			 }

			 for (int j=0; j < NumCols; j++)
			 {
				 //Display the values of the Third array
				 arrThird[i][j] = arrFirst[i][j] + arrSecond[i][j];
				 cout << setw(5) << left << arrThird[i][j];
			 
			 //End Third Array loop
			 }

			//End line for each row
			cout << endl;
		 //End Row loop
		 }


	_getch();
	return 0;
}