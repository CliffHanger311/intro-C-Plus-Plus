#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

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
		string MyString = "Hello World";
		
		cout << "Please Enter a whole number: q to quit " << endl;
		cin >> MyString;
		cout << "You entered in: " << MyString << endl;

		bool IsNumeric = true;

		for (int i = 0; i < MyString.length(); i++)
		{
			char c = MyString[i];
			if (IsNumber(c) == false)
			{
				//cout << "char at index = " << i << " is a number." << endl;
				IsNumeric = false;
			}
			//cout << "counter is = " << i << endl;
		}

		 if (IsNumeric)
		 {
			 cout << "IS A NUMBER!!" << endl;
		 }
		 else
		 {
			 cout << "not a number" << endl;
		 }


		if (MyString == "q")
		{
			IsNotQuit = false;
		}
	}
	_getch();
	return 0;
}