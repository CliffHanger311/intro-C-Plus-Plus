#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

bool IsNumber(char c)
{	
	bool IsNumeric = false;
	switch(c)
		{
			case '0':
				IsNumeric = true;
				break;
			case '1':
				IsNumeric = true;
				break;
			case '2':
				IsNumeric = true;
				break;
			case '3':
				IsNumeric = true;
				break;
			case '4':
				IsNumeric = true;
				break;
			case '5':
				IsNumeric = true;
				break;
			case '6':
				IsNumeric = true;
				break;
			case '7':
				IsNumeric = true;
				break;
			case '8':
				IsNumeric = true;
				break;
			case '9':
				IsNumeric = true;
				break;
		}
	return IsNumeric;
}


int main()
{
	bool IsNotQuit = true;
	
	while (IsNotQuit)
	{
		
		char c;
		cout << "Please Enter a number: q to quit " << endl;
		cin >> c;

		if (IsNumber(c))
		{
			cout << endl << "You Entered " << c << endl;
		}
		else if (c == 'q')
		{
			IsNotQuit = false;
		}
		else
		{
			cout << endl<< c << " is not a number " << endl;
		}

		/*
		Code without using a switched statement
		if (c == '1'||c == '2'||c == '3'||c == '4'||c == '5'||c == '6'||c == '7'||c == '8'||c == '9'||c == '0')
		{
			cout << endl << "You Entered " << c << endl;
		}
		else if (c == 'q')
		{
			IsNotQuit = false;
		}
		else
		{
			cout << endl<< c << " is not a number " << endl;
		}
		*/
	}
	_getch();
	return 0;
}