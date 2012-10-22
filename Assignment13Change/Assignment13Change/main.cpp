/*
	Author: CliffHanger
	C++, Assignment 13 - Change
	10/22/2012
*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//Function Prototypes
double Change(double, double);
void FindChange(double, int, int, int, int, int, int, int, int, int);

//Const variables for changs Values
const double Fifty = 50;
const double Twenty = 20;
const double Ten = 10;
const double One = 1;
const double Quarter = .25;
const double Dime = .10;
const double Nickle = .05;
const double Penny = .01;

int main()
{
	//declare variables to hold values for program
	bool blnContinue = false;
	char C = '0';
	double dblPrice = 0;
	double dblPayAmount = 0;
	double dblResult = 0;
	bool CheckInput = false;

	//Variable to hold amount of each change amount
	int Fifties = 0;
	int Twenties = 0;
	int Tens = 0;
	int Fives = 0;
	int Ones = 0;
	int Quarters = 0;
	int Dimes = 0;
	int Nickles = 0;
	int Pennies = 0;

	cout << fixed << setprecision(2);
	
	//This is the greeting and purpose of the program
	cout << "This program is going to ask you for a total price of purchase, " << endl 
		<< "and the amount used for payment." << endl
		<< "Then it will give you the amount of change to be returned, " << endl
		<< "in bills, quarters, dimes, nickles, and pennies!" << endl;
	cout << endl;


	//execute once, then loop the program at users leisure
	do
	{
		
		cout << "Please enter the total price of the purchase: ";
		cin >> dblPrice;
		cout << endl;

		cout << "Now you may enter the payment amount: ";
		cin >> dblPayAmount;
		cout << endl;
			
		//Check Input to make sure PayAmount > Price
		do 
		{
			if (dblPayAmount < dblPrice)
			{
				//If PayAmount < Price, Ask for new pay amount
				cout << "Incorrect input! Pay Amount must be LARGER than the Price!" << endl
					<< "Please enter a new Pay Amount: ";
				cin >> dblPayAmount;
				cout << endl;
				CheckInput = false;
			}
			else
			{
				//Allow program to continue
				CheckInput = true;
			}
		}while (CheckInput == false);

		//Call function here
		dblResult = Change(dblPrice, dblPayAmount);
		
		//Call function to find each change amount
		//FindChange(Change, &Fifties, &Twenties, &Tens, &Fives, &Ones, &Quarters, &Dimes, &Nickles, &Pennies);

		//Output results to the user
		cout << "Your change is " << dblResult << endl; 
		cout << endl;

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

double Change(double Price, double Payment)
{
	//Declare variable to hold change amount
	double Change =  Payment - Price;
	return Change;
}

void FindChange(double Change, int &Fifties, int &Twenties, int &Tens, int &Fives, int &Ones, int &Quarters, int &Dimes, int &Nickles, int &Pennies)
{
	if (Change > Fifty)
	{
		//Calculate how many fifties needed
		while(Change > Fifty)
		{
			Change =- Fifty;
			Fifties++;
		}

	}
	else if(Change > 20)
	{
		//Calculate how many Twenties needed

	}
	else if(Change > 10)
	{
		//Calculate how many Tens needed

	}
	else if(Change > 5)
	{
		//Calculate how many Fives needed

	}
	else if(Change > 1)
	{
		//Calculate how many Ones needed

	}
	else if(Change > .25)
	{
		//Calculate how many Quarters needed

	}
	else if(Change > .10)
	{
		//Calculate how many Dimes needed

	}
	else if(Change > .5)
	{
		//Calculate how many Nickles needed

	}
	else if(Change > .01)
	{
		//Calculate how many Pennies needed

	}
}

/*
	To do list
	Working on the FindChange function
	Having trouble passing variables by ref
	using const for change values
*/