#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int TestNumber = 6;
	bool TestBool = false;
	float TestFloat = 2.67;
	char TestChar = '#';
	long TestLong = 4112341234;
	short TestShort = 2342;
	double TestDouble = 2342134;
	string Teststring = "What?";

	cout << "The size of the Integer is " << sizeof(TestNumber) << " bytes." << endl;
	cout << "The size of the Bool is " << sizeof(TestBool) << " bytes." << endl;
	cout << "The size of the Float is " << sizeof(TestFloat) << " bytes." << endl;
	cout << "The size of the Char is " << sizeof(TestChar) << " bytes." << endl;
	cout << "The size of the Long is " << sizeof(TestLong) << " bytes." << endl;
	cout << "The size of the Short is " << sizeof(TestShort) << " bytes." << endl;
	cout << "The size of the Double is " << sizeof(TestDouble) << " bytes." << endl;
	cout << "The size of the String is " << sizeof(Teststring) << " bytes." << endl;
	
	cout << "Press any key.";

	_getch();
	return 0;
}