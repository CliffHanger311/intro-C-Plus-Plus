#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() 
{
	//declare Variable
	float Miles;
	float Gallons;

	//Display output, and accept user input
	cout << "Enter the miles driven: ";
	cin >> Miles;
	cout << "Enter the gallons of gas used: ";
	cin >> Gallons;

	//Preform calculation, then display to the user
	float MPG = (Miles / Gallons);
	cout << fixed << setprecision(1);
	cout << "Miles per gallon: " << MPG;
	
	_getch();
	return 0;
}
