#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//Function Prototypes
bool Change(double, double);

int main()
{
	//declare variables to hold values for program
	bool blnContinue = false;
	char C = '0';
	double dblPrice = 0;
	double dblPayAmount = 0;
	bool CheckInput = false;
	
	//This is the greeting and purpose of the program
	cout << "This program is going to ask you for a total price of purchase, " << endl 
		<< "and the amount used for payment." << endl
		<< "Then it will give you the amount of change to be returned, " << endl
		<< "in bills, quarters, dimes, nickles, and pennies!" << endl;
	cout << endl;


	//execute once, then loop the program at users leisure
	do
	{
		//do 
		//{
		cout << "Please enter the total price of the purchase: ";
		cin >> dblPrice;
		cout << endl;

		cout << "Now you may enter the payment amount: ";
		cin >> dblPayAmount;
		cout << endl;
			
		CheckInput = Change(dblPrice, dblPayAmount);
		//}while (CheckInput == false);




		//Give user choice to continue or quit
		//***insert cin clear to prevent program from looping with incorrect input
		cout << "Press any key to continue, 'q' or 'Q' to quit: ";
		cin >> C;
		cout << endl;

		if (C == 'q'||C == 'Q')
		{
			//Set continue bool to false
			blnContinue = false;
		}else
		{
			//Set continue bool to true
			blnContinue = true;
		}
	}while(blnContinue == true);

	_getch();
	return 0;
}

bool Change(double Price, double Payment)
{



}

/*
	To do list
	need to create function for creating change
	debating what kind of return value i should use (currently returning bool)

*/