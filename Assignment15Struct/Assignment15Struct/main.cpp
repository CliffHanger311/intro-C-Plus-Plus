#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

struct Employee
{
	int Number;
	string Name;
	double Rate;
	double Hour;
};

int main()
{
	//Variables to hold values
	Employee myEmployees[10];
	//int EmployeeLength = 10;
	int EmployeeIndex = 0;
	char c = '0';
	bool isQuit = false;

	//Greeting to the user, and purpose
	cout << "This porgram is for listing the payroll of a company. " << endl
		<< "You may list any number of employees you have, " << endl
		<< "and you can quit whenever you need to." << endl << endl;

	while (!isQuit)
	{
		Employee TempEmployee;

		//Ask for input for Number, collect in structure
		cout << "Number: " ;
		cin >> TempEmployee.Number;

		//Ask for input for Name, collect in structure
		cout << "Name: ";
		cin >> TempEmployee.Name;

		//Ask for input for Rate, collect in structure
		cout << "Rate: ";
		cin >> TempEmployee.Rate;

		//Ask for input for Hour, collect in structure
		cout << "Hour: ";
		cin >> TempEmployee.Hour;

		//Set new employee to the array
		myEmployees[EmployeeIndex] = TempEmployee;
		EmployeeIndex++;

		//Out titles of columns
		cout << fixed << setprecision(2);
		cout << left << setw(10) << "Number"
			 << left << setw(10) << "Name"
			 << left << setw(10) << "Rate"
			 << left << setw(10) << "Hour" << endl;

		for (int i = 0; i < EmployeeIndex; i++)
			{
				//Output the values of each row
				cout << left << setw(10) << myEmployees[i].Number
					 << left << setw(10)<< myEmployees[i].Name
					 << right << setw(10) << myEmployees[i].Rate
					 << right << setw(10) << myEmployees[i].Hour
					 << endl;
			}

		//Ask the user if they wish to continue
		cout << "Press q or Q to quit, any button to continue: ";
		cin >> c;
		cout << endl;

		if (c == 'q' || c == 'Q')
		{
			//Set to true, user choose to quit
			isQuit = true;
		}
		else
		{
			//Set to false, user wishes to continue
			isQuit = false;
		}
	}

	_getch();
	return 0;
}


		//cin.ignore(256, '\n');