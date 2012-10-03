#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//Function prototypes
bool CheckInput(char);
int ValidateInput(int, int);
int isdigit(int);

int main()
{
	//Declare Variables
	int FirstNum = 0;
	int SecondNum = 0;
	char C;

	//Loop that user can control
	bool RunProgram = true;
	while(RunProgram == true)

	{
		//request user input
		cout << "Please enter two numbers!" << endl;
		cout << "First: ";
		cin >> FirstNum;

		if (isdigit(FirstNum))

				
		cout << endl;
		cout << "Second: ";
		cin >> SecondNum;
		cout << endl;

		/*
			Use ValidateInput fucntion to check for num values
		*/

		

		cout << "You selected " << FirstNum << " and " << SecondNum << endl;

		//Give user choice to continue
		cout << "Do you wish to restart this program? y/n" << endl;
		cin >> C;
		cout << endl;
		RunProgram = CheckInput(C);

		//Display good bye to user when exiting
		if(RunProgram == false)
		{
			cout << "Thank you for using this program!!" << endl;
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
		}
}


int ValidateInput(int Num1, int Num2)
{

	return true;
}



/*
	To Do list
	Looking to validate user input for numbers
	Started the function, but it's not complete

	restarting of program works great

	also need to create menu options 
*/