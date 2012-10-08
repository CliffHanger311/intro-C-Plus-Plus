#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//Fucntion Prototypes
double find_average(double, double, double);

int main()
{
	//bool Variable to control program
	bool Continue = true;

	do 
	{
		//Variables to use in program
		double FirstNum = 0;
		double SecondNum = 0;
		double ThirdNum = 0;
		double Average = 0;
		char C;

		cout << fixed << setprecision(1);

		//Tell user what the program will do
		cout << "This Program is going to find the average of 3 numbers of your choosing." << endl << endl;

		//Ask for first Number, put input to FirstNum
		cout << "Please enter your first number. (whole or decimal): ";
		cin >> FirstNum;

		//Ask for second Number, put input to SecondNum
		cout << "Please enter your second number. (whole or decimal): ";
		cin >> SecondNum;

		//Ask for third Number, put input to ThirdNum
		cout << "Please enter your third number. (whole or decimal): ";
		cin >> ThirdNum;

		Average = find_average(FirstNum, SecondNum, ThirdNum);

		cout << endl << "The average of the three numbers are " << Average << endl;

		cout << "Do you wish to continue? y/Y = yes or n/N = no: ";
		cin >> C;

		bool InValid = true;
		while (InValid == true)
		{
			if (C == 'y'||C =='Y')
			{
				//Keep Continue as true
				Continue = true;
				InValid = false;
			}
			else if(C == 'n'||C =='N')
			{
				//Change Continue to false
				Continue = false;
				InValid = false;
			}
			else
			{
				//Invalid input, ask user to try again
				cout << "Invalid input please try again!" << endl
					<< "Do you wish to continue? y/Y = yes or n/N = no: ";
				cin >> C;

				if (C == 'y'||C =='Y')
				{
					//Invalid to false, continue to true
					InValid = false;
					Continue = true;

				}
				else if(C == 'n'||C =='N')
				{
					//Invalid to false, continue to false
					InValid = false;
					Continue = false;
				}
				else
				{
					//Invalid input to true, continue isn't changed
					InValid = true;
				}
			}
		}
	}while(Continue == true);

	//Output goodbye
				cout << "Thank you for using this program, Good bye!" << endl;
	_getch();
	return 0;
}

double find_average(double First, double Second, double Third)
{
	return (First + Second + Third) / 3;
}

/*
	Extra Credit: I didn't use my book. 2 points!!!
*/
