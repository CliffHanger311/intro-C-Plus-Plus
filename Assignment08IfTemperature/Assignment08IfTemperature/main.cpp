#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() 
{
	//Declare variables
	double Temperature01 = 0;
	double Temperature02 = 0;
	char TempType;
		
	//Ask user for temperature input
	cout << "Please enter a number for temperature conversion:" << endl;
	cin >> Temperature01;

	//Ask user for the type of temperature, f or c
	cout << "Please Select the scale, or type, of degrees for current temperature: " 
		<< endl <<"f/F = Fahrenheit; c/C = Celsius" << endl;
	cin >> TempType;

	if (TempType == 'f'||TempType == 'F')
	{
		//Fahrenheit to Celsius
		//Celsius = (5.0/9.0)*(fahrenheit – 32.0)
		Temperature02 = (5.0 / 9.0) * (Temperature01 - 32.0);
	}
	else if (TempType == 'c'||TempType == 'C')
	{
		//Celsius to Fahrenheit
		//Fahrenheit = (9.0/5.0)*celsius + 32.0
		Temperature02 = (9.0 / 5.0) * (Temperature01 + 32.0);
	}
	else
	{
		//Invalid input, exit
		cout << "Invalid input, program ending";
	}


	_getch();
	return 0;
}


/* 
	Fair start, need to ouput results from calculations
	format the output
	debug
*/