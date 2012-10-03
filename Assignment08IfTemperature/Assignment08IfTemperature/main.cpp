#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() 
{
	bool Continue = true;
	
	while(Continue == true)
	{
		//Declare variables
		double TemperatureIN = 0;
		double TemperatureOFF = 0;
		char TempType;
		char C;

		//format output to two decimal places
		cout << fixed << setprecision(2);
		
		//Ask user for temperature input
		cout << "Please enter a number for temperature conversion:" << endl;
		cin >> TemperatureIN;
		cout << endl;

		//Ask user for the type of temperature, f or c
		cout << "Please Select the scale, or type, of degrees for current temperature: " 
			<< endl <<"f/F = Fahrenheit; c/C = Celsius" << endl;
		cin >> TempType;
		cout << endl;

		if (TempType == 'f'||TempType == 'F')
		{
			//Fahrenheit to Celsius
			//Celsius = (5.0/9.0)*(fahrenheit – 32.0)
			TemperatureOFF = (5.0 / 9.0) * (TemperatureIN - 32.0);
			cout << TemperatureIN << " degrees Fahrenheit converts to " << TemperatureOFF << " Celsius" << endl << endl;
		}
		else if (TempType == 'c'||TempType == 'C')
		{
			//Celsius to Fahrenheit
			//Fahrenheit = (9.0/5.0)*celsius + 32.0
			TemperatureOFF = (9.0 / 5.0) * (TemperatureIN + 32.0);
			cout << TemperatureIN << " degrees Celsius converts to " << TemperatureOFF << " Fahrenheit" << endl << endl;
		}
		else
		{
			//Invalid input, exit
			cout << "Invalid input, program ending" << endl;
			break;
		}

		//Ask user if they wish to continue
		cout << "Do you wish to perform another calculation? y/n" << endl;
		cin >> C;
		cout << endl;

		if (C == 'y'||C == 'Y')
		{
			//Set continue to true
			Continue = true;
		}
		else if(C == 'n'||C == 'N')
		{
			//Set continue to false
			Continue = false;
		}
		else
		{
			//Invalid input, exit
			cout << "Invalid input, program ending" << endl;
			break;
		}

	}
	_getch();
	return 0;
}


/* 
	Fair start, need to ouput results from calculations
	format the output
	debug
*/