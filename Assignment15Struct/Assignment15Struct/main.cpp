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
	//Greeting to the user, and purpose
	cout << "This porgram is for listing the payroll of your company. " << endl
		<< "You may create a list for any number of employees you have, " << endl
		<< "and you can quit whenever you are finished." << endl << endl;

	//Variables to hold values
	int EmployeeIndex = 0;
	int numEmployees = 0;
	char c = '0';
	bool isQuit = false;

	cout << "How many employees are you going to enter to the list? ";
	cin >> numEmployees;
	cout << endl;
	
	Employee *myEmployees = new Employee[numEmployees];
	//Employee myEmployees[10];
	
	for (int i = 0; i < numEmployees; i++)
	{
		Employee TempEmployee;

		//Ask for input for Number, collect in structure
		cout << "Number: ";
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
		cout << endl;
	}

	//Out titles of columns
		cout << fixed << setprecision(2) << endl;
		cout << left << setw(6) << "Number" << " | " 
			 << left << setw(20) << "Name"  << " | "
			 << left << setw(5) << "Rate"  << "  | "
			 << left << setw(5) << "Hour" << endl;

	for (int i = 0; i < EmployeeIndex; i++)
		{
			//Output the values of each row
			cout << left << setw(6) << myEmployees[i].Number << " | "
					<< left << setw(20) << myEmployees[i].Name << " | $" 
					<< right << setw(5) << myEmployees[i].Rate << " | "
					<< right << setw(5) << myEmployees[i].Hour
					<< endl;
		}
	

		//Ask the user if they wish to continue
		cout << endl << "Press q or Q to quit, any button to continue: ";
		cin >> c;
		cin.ignore(256, '\n');
		cout << endl;

		if (c == 'q' || c == 'Q')
		{
			//Set to true, user choose to quit
			isQuit = true;
			
			//Output farewell
			cout << "Thank you for using this program, come back soon!!";
		}
		else
		{
			//Set to false, user wishes to continue
			isQuit = false;
		}

	delete[] myEmployees;
	_getch();
	return 0;
}