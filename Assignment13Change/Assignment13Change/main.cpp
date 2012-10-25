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
void FindChange(double, int&, int&, int&, int&, int&, int&, int&, int&, int&);

//Const variables for changs Values
const double Fifty = 50;
const double Twenty = 20;
const double Ten = 10;
const double Five = 5;
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


	cout << fixed << setprecision(2);
	cin >> fixed >> setprecision(2);
	
	//This is the greeting and purpose of the program
	cout << "This program is going to ask you for a total price of purchase, " << endl 
		<< "and the amount used for payment." << endl
		<< "Then it will give you the amount of change to be returned, " << endl
		<< "in bills, quarters, dimes, nickles, and pennies!" << endl;
	cout << endl;


	//execute once, then loop the program at users leisure
	do
	{
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
		FindChange(dblResult, Fifties, Twenties, Tens, Fives, Ones, Quarters, Dimes, Nickles, Pennies);

		//Output results to the user
		cout << "Your change is " << dblResult << endl; 
		cout << endl;

		//Output All the change you will give to the customer
		cout << "Give the customer the following change:" << endl
			<< "\tFifies: " << Fifties << endl
			<< "\tTwenties: " << Twenties << endl
			<< "\tTens: " << Tens << endl
			<< "\tFives: " << Fives << endl
			<< "\tOnes: " << Ones << endl
			<< "\tQuarters: " << Quarters << endl
			<< "\tDimes: " << Dimes << endl
			<< "\tNickles: " << Nickles << endl
			<< "\tPennies: " << Pennies << endl;

		//Give user choice to continue or quit
		//***insert cin clear to prevent program from looping with incorrect input
		cout << "Press any key to continue, 'q' or 'Q' to quit: ";
		cin >> C;
		cout << endl;

		//If statement to ask user if continue
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

	//Output farewell to user
	cout << "Thank you for using thsi program, come back soon!" << endl;

	_getch();
	return 0;
}

double Change(double Price, double Payment)
{
	//Declare variable to hold change amount
	double Change =  Payment - Price;
	return Change;
}

void FindChange(double Change, int &Fifties, int &Twenties, int &Tens, int &Fives, int &Ones, 
	int &Quarters, int &Dimes, int &Nickles, int &Pennies)
{
		if (Change >= Fifty)
		{
			//Calculate how many fifties needed
			while(Change >= Fifty)
			{
				Change -= Fifty;
				Fifties++;
			}
		}
		
		if(Change >= Twenty)
		{
			//Calculate how many Twenties needed
			while(Change >= Twenty)
			{
				Change -= Twenty;
				Twenties++;
			}
		}
		
		if(Change >= Ten)
		{
			//Calculate how many Tens needed
			while(Change >= Ten)
			{
				Change -= Ten;
				Tens++;
			}
		}
		
		if(Change >= Five)
		{
			//Calculate how many Fives needed
			while(Change >= Five)
			{
				Change -= Five;
				Fives++;
			}
		}
		
		if(Change >= One)
		{
			//Calculate how many Ones needed
			while(Change >= One)
			{
				Change -= One;
				Ones++;
			}
		}
		
		if(Change >= Quarter)
		{
			//Calculate how many Quarters needed
			while(Change >= Quarter)
			{
				Change -= Quarter;
				Quarters++;
			}
		}
		
		if(Change >= Dime)
		{
			//Calculate how many Dimes needed
			while(Change >= Dime)
			{
				Change -= Dime;
				Dimes++;
			}
		}
		
		if(Change >= Nickle)
		{
			//Calculate how many Nickles needed
			while(Change >= Nickle)
			{
				Change -= Nickle;
				Nickles++;
			}
		}
		 
		if(Change >= Penny)
		{
			Change = Change * 100;
			Pennies = (int) Change;
		}
}

