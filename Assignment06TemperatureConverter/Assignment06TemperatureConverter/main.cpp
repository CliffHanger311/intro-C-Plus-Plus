#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//variable for loop
	char c = '0';

	while (c != 'q'||c != 'q')
	{
		//Variables for program
		double Celsius = 0;
		double Fehrenheit = 0;
	
		//ask user for degrees in celsius
		cout << "Please enter an amount in Celsius: ";
		cin >> Celsius;
		cout << endl;

		//Calculation to convert degrees
		Fehrenheit = (9.0/5.0) * Celsius + 32.0;

		//Format output to 2 decimal places
		cout << fixed << setprecision(2);

		//Output the results to the user, displaying the input with the result
		cout << Celsius << " degrees Celsius converts to " << Fehrenheit << " degrees Fehrenheit!" << endl << endl;

		//ASk user if they wish to continue
		cout << "Press any key to continue! q or Q to quit: ";
		cin >> c;
		cout << endl;

		if (c == 'q'||c == 'Q')
		{
			//Display salutions to user
			cout << "Thanks for using this converter!!" << endl
				<< endl
				<< "\t --CliffHanger--";
		}
	}
	_getch();
	return 0;
}