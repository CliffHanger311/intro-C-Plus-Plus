#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//Plan out Functions, so they can be called later
int SumValue(int num1, int num2);
int SumReference(int &num1, int &num2);


int main()
{
	int Input1 = 100;
	int Input2 = 200;

	int Total = SumValue(Input1, Input2);
	cout << "Input 1: " << Input1 << "Input 2: " << Input2 << "Total: " << Total << endl;

	Total = SumReference(Input1, Input2);
	cout << "Input 1: " << Input1 << "Input 2: " << Input2 << "Total: " << Total << endl;

	_getch();
	return 0;
}


int SumValue(int num1, int num2)
{
	num1 = num1 + num2;
	return num2;
}

int SumReference(int &num1, int &num2)
{
	num1 = num1 + num2;
	return num1;
}

/*  
	byVal is using a copy of the variable
	byRef is taking the actual variable to change it.

	'&' is used to declare variable by reference
*/