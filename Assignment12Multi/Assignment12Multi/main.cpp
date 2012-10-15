#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//Function Prototypes
double Multi(double, double);

int main()
{
	//Declare variables to hold input from user
	double FirstNum = 0;
	double SecondNum = 0;
	double Result = 0;
	bool blnContinue = false;
	char C = '0';

	//Display greeting, and purpose of program
	cout << "This program is designed to take two numbers of your choosing, " << endl
		<< "multiply them together, and display the result." << endl;
	cout << endl;

	do
	{
		//Ask user for input
		cout << "Please enter any two numbers." << endl
			<< "First: ";
		cin >> FirstNum;
		cout << "Second: ";
		cin >> SecondNum;

		//Call the function, set answer to Result
		Result = Multi(FirstNum, SecondNum);

		//Output the result 
		cout << FirstNum << " * " << SecondNum << " = " << fixed << setprecision(3) << Result << endl;
		cout << endl;

		//Give user choice to continue
		cout << "Press any key to continue, q or Q to quit: ";
		cin >> C;
		cout << endl;

		if (C == 'q'||C == 'Q')
		{
			//set continue to true
			blnContinue = false;
		}
		else
		{
			//Set continue to false
			blnContinue = true;
		}

	}while (blnContinue == true);

	//Output Saluations
	cout << "Thanks for using this program!";

	_getch();
	return 0;
}

double Multi(double Number1, double Number2)
{
	//Declare a variable to hold the answer
	double Answer = 0;

	//Multi the two numbers from the user
	Answer = Number1 * Number2;

	//return the answer back to the user
	return Answer;
}