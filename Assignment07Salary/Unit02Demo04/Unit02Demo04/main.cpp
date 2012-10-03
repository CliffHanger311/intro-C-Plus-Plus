#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int GetSum(int num1, int num2)
{
	return num1 + num2;
}

//Functions can be named the same as long as perimeters are different
int GetSum(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}



int main() 
{
	int InputNum1 = 0;
	int InputNum2 = 0;
	int InputNum3 = 0;

	cout << "Please enter the first number to add: " << endl;
	cin >> InputNum1;
	cout << "Please enter the second number to add: " << endl;
	cin >> InputNum2;

	int Total = GetSum(InputNum1, InputNum2, InputNum3);

	cout << "The sum is : " << Total << endl;
	_getch();
	return 0;
}