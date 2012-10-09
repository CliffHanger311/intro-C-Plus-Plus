#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

//Function prototypes
bool CheckInput(char);
bool ValidateInput(int, int, char);
//int isdigit(double);

int main()
{
	//Declare Variables
	double FirstNum = 0;
	double SecondNum = 0;
	double Input;
	char C;
	int Selection = 0;

	//Greeting to the user
	cout << "This program was designed to take two numbers" << endl 
		<< "and perform the calculation of your choosing!" << endl
		<< endl;

	//Loop that user can control
	bool RunProgram = true;
	while(RunProgram == true)
	{
		//request user input

		cout << "Please enter two numbers!" << endl 
			<< endl;

		cout << "First: ";
		cin >> FirstNum;
		cout << endl;

		cout << "Second: ";
		cin >> SecondNum;
		cout << endl;

		//Ask the user what they want to do, listing the five choices.
		cout << "What would you like to do with these numbers?" << endl
			<< endl
			<< "1 - Addition" << endl
			<< "2 - Subtraction" << endl
			<< "3 - Multiply" << endl
			<< "4 - Division" << endl
			<< "5 - Average" << endl
			<< "6-9 - To select new numbers" 
			<< endl
			<<"Please select a number between 1-5: ";
		cin >> Selection;

		cout << endl;

		ValidateInput(FirstNum, SecondNum, Selection);
		
		//Give user choice to continue
		cout << endl << "Do you wish to restart this program? y/n" << endl;
		cin >> C;
		cout << endl;
		RunProgram = CheckInput(C);

		//Display good bye to user when exiting
		if(RunProgram == false)
		{
			cout << endl << "Thank you for using this program!!" << endl;
		}
		
	}
	_getch();
	return 0;
}



//Function to check for valid restart input
bool CheckInput(char X)
{
	bool IncorrectInput = true;
	while(IncorrectInput == true)
	{
		if(X == 'y'|| X == 'Y')
		{
			//valid input, return true to continue
			IncorrectInput = false;
			return true;
		}
		else if(X == 'n'|| X == 'N')
		{
			//Valid input, return false to stop
			IncorrectInput = false;
			return false;
		}
		else
		{
			//invalid input, display error, and ask for new input
			cout << "Invalid input, program ending" << endl
			<< "Please enter a y/Y for Yes, or n/N for No!" << endl;
			cin >> X;
			cout << endl;
			IncorrectInput = true;
			return false;
		}
	}
}

bool ValidateInput(int Number1, int Number2, char Selection)
{
	//Variables for function
	bool IncorrectInput = true;
	double Answer;

	while(IncorrectInput == true)
	{
		switch(Selection)
		{
		case 1:
			Answer = Number1 + Number2;
			cout << Number1 << " + " << Number2 << " equals " << Answer<< endl;
			IncorrectInput = true;
			return true;
			break;
		case 2:
			Answer = Number1 - Number2;
			cout << Number1 << " - " << Number2 << " equals " << Answer<< endl;
			IncorrectInput = true;
			return true;
			break;
		case 3:
			Answer = Number1 * Number2;
			cout << Number1 << " * " << Number2 << " equals " << Answer<< endl;
			IncorrectInput = true;
			return true;
			break;
		case 4:
			Answer = Number1 / Number2;
			cout << Number1 << " / " << Number2 << " equals " << Answer<< endl;
			IncorrectInput = true;
			return true;
			break;
		case 5: 
			Answer = (Number1 + Number2) / 2;
			cout << "The Average of " << Number1 << " and " << Number2 << " is " << Answer<< endl;
			IncorrectInput = true;
			return true;
			break;
		default:
			cout << "Please enter a number between 1-5!";
			IncorrectInput = false;
			return true;
			break;
		}
	}
	
}

/*
	To Do list
	Looking to validate user input for numbers
	Function top valid input seems to be working

	Needs further debugging 
*/