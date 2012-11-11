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
	//Variables to hold default values
	//Employee myEmployees[10];
	
	//int EmployeeLength = 10;
	int EmployeeIndex = 0;
	char c = '0';
	bool isQuit = false;

	//Greeting to the user, and purpose
	cout << "This porgram is for listing the payroll of a company. " << endl
		<< "You may list any number of employees you have, " << endl
		<< "and you can quit whenever you need to." << endl << endl;

	//declare for array length
	  int arrLength;
	  cout << "How many employees will you be entering? ";
	  cin >> arrLength;
	  cout << endl;

	//declare int pointer AND allocate new integer array of arrLength
	Employee *myEmployees = new Employee[arrLength];

	//For loop to enter employees Information
	for (int c = 1; c <= arrLength; c++)
	{
		Employee TempEmployee;

		//Output which number is being input
		cout << c << " Employee" << endl;

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
		cout << endl;

		//Set new employee to the array
		myEmployees[EmployeeIndex] = TempEmployee;
		EmployeeIndex++;
	}

		//Output titles of columns
		const int ColumnLenghtNumber = 8;
		const int ColumnLenghtName = 15;
		const int ColumnLenghtHrR = 8;

		cout << endl << fixed << setprecision(2);
		cout << left << setw(ColumnLenghtNumber) << "Number"
			 << left << setw(ColumnLenghtName) << "Name"
			 << left << setw(ColumnLenghtHrR) << "Rate" << "\t"
			 << left << setw(ColumnLenghtHrR) << "Hour" << endl;

		for (int i = 0; i < EmployeeIndex; i++)
			{
				//Output the values of each row
				cout << left << setw(ColumnLenghtNumber) << myEmployees[i].Number
					 << left << setw(ColumnLenghtName)<< myEmployees[i].Name
					 << right << setw(ColumnLenghtHrR) << myEmployees[i].Rate << "\t"
					 << right << setw(ColumnLenghtHrR) << myEmployees[i].Hour
					 << endl;
			}

		////Ask the user if they wish to continue
		//cout << "Press q or Q to quit, any button to continue: ";
		//cin >> c;
		//cout << endl;

		//if (c == 'q' || c == 'Q')
		//{
		//	//Set to true, user choose to quit
		//	isQuit = true;
		//}
		//else
		//{
		//	//Set to false, user wishes to continue
		//	isQuit = false;
		//}

	_getch();
	return 0;
}