#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	bool Continue = true;

	//Calculate Hours until user chooses to stop
	while (Continue == true)
	{
		//Declare variables for variables
		double Pay = 8.00;
		double OTPay = 12.00;
		double Hours = 0;
		double Overtime = 0;
		double Salary = 0;
		char C;

		//Display message asking for input of hours, put input to hours variable
		cout << "Enter number of hours worked?" << endl;
		cin >> Hours;

		//Check to make sure input is >= 0
		while(Hours < 0)
		{
			//Display error, and ask to try again
			cout << "Error: Input needs to be 0 or greater" << endl
				<< endl
				<< "Please enter a different value" << endl;

			//Put new input into hours variables
			cin >> Hours;
		}

		if (Hours < 40)
		{
			//Set Display to two decimal places
			cout << fixed << setprecision(2);

			//Calculate Hours with Pay for salary, display answer
			Salary = Hours * Pay;
			cout << "Your Salary is " << Salary << endl;
		}
		else 
		{
			//Set Display to two decimal places
			cout << fixed << setprecision(2);

			//Seperate hours over 40
			Overtime = Hours - 40;

			//Subtract Overtime from Hours for hours to be $40.00
			Hours = Hours - Overtime;
		
			//Calculate Hours with Pay for salary(Splus 4 for overtime), display answer
			Salary = Hours * (Pay);
			Salary += Overtime * (OTPay);
			cout << "Your Salary is " << Salary << endl;
		}

		//Request for user to continue or not
		cout << "So you wish to calculate another salary? y/n" << endl;
		cin >> C;
		
		//Invalid input, loop until user inputs correctly
			if (C == 'y')
				{
					//Set Continue to true
					continue;
				}
				else if(C == 'n')
				{
					//Continue to end
					Continue = false;
					break;
				}
				else 
				{
					//Error happened with continue input
					bool Error = true;
					while (Error == true)
					{
						//Ask user to try again
						cout << "Please try again! Enter y for yes, or n for no: " << endl;
						cin >> C;

						if (C == 'y')
						{
							//Error corrected, continue yes
							Error = false;
							Continue = true;
						}
						else if (C == 'n')
						{
							//Error corrected, continue no
							Error = false;
							Continue = false;
						}
						else
						{
							//Another error, repeat error handle
							Error = true;
						}
					}
				}		
		}

	_getch();
	return 0;
}