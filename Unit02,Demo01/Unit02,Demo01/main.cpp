#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
Start:

	//Declare variables
	int Age = 0;
	int Year = 2012;

	//Output to the user, asking them for input.
	cout << "Please input your Age?"<< endl;
	cin >> Age; 

	if (Age < 0)
	{
		cout << "Please enter a positive number?!" << endl;

	}
	else if (Age > 150)
	{
		cout << "Please show your birth certificate!" << endl;
		
	}
	else
	{
		//Calculate the variables
		Year = 2012 - Age;

		//Display result to user
		cout << "You were born in the year " << Year << endl;
	}

	//_getch();

	/* there is no output to let user know what to do here.*/

	//test for input to end
	char c;
	cin >> c;

	if (c != 'q')
	{
		//Code to send program back to start label.
		//Not a good method for looping, but is useful for debugging.
		goto Start;
	}
		
	return 0;
}