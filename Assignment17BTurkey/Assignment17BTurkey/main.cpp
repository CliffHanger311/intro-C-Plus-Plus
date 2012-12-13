#include "turkey.h"

using namespace std;

//Function Prototypes
bool Continue(char);

//Global Variables
bool blnContinue = false;


int main()
{
	//Variable to hold input
	char userInput = 0;
	int TurkeySize = 0;

	//Display greetings to the user
	cout << "Happy Thanksgiving!!" << endl;

	do
	{
		//Ask user what size of turkey they would like
		cout << "How large of a turkey are you looking for?" << endl
			<< "Please enter a number: ";
		cin >> TurkeySize;

		//Turkey ASCII code here
		cout << TurkeySize << endl;

		//Ask user if they wish to continue
		cout << "Is this the right size of turkey for you, or should we try another?" << endl;
		cout << "Please enter a Y for Yes, or N for No: ";
		cin >> userInput;

		blnContinue = Continue(userInput);
	}while (blnContinue == true);

	cout << endl << "Thank you for visiting! Enjoy your Holidays!!" << endl;

	_getch();
	return 0;
}

bool Continue(char Input)
{
	//bool to control 
	bool ValidateInput = false;

	//Do loop to control input validation
	do
	{
		if (Input == 'y' || Input == 'Y')
			{
				//Return true and Validate true
				ValidateInput = true;
				return true;
			}
			else if (Input == 'n' || Input == 'N')
			{
				//Return false and Validate true
				ValidateInput = true;
				return false;
			}
			else
			{
				//return nothing and Validate False
				ValidateInput = false;
				cout << "Please enter Y for Yes, or N for No: ";
				cin >> Input;
			}
	} while (ValidateInput == false);
}