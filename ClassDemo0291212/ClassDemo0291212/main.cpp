#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << 5 << endl;
	cout << "5" << endl;
	cout << '5' << endl;

	cout << 5 + 2 << endl;
	cout << "5 + 2" << endl;
	cout << '5+2' << endl;

	cout << "-----------------------------------------------------" << endl;
	cout << "Testing inline calculations with float and integers" << endl;
	cout << "-----------------------------------------------------" << endl;

	int TestNumber = 5.6;

	cout << "TestNumber = " << TestNumber << endl;
	cout << "division test 5 / 4 " << 5 / 4 << endl;
	cout << "division test 5.0 / 4.0 " << 5.0 / 4.0 << endl;
	cout << "division test 5 / 4.0 " << 5 / 4.0 << endl;
	cout << "division test 5.0 / 4 " << 5.0 / 4 << endl;
	
	cout << "-----------------------------------------------------" << endl;
	TestNumber = 5.0 / 4;
	cout << "TestNumber (division test 5.0 / 4) = " << TestNumber << endl;

	cout << "-----------------------------------------------------" << endl;

	bool TestBool = 10.0 / 2;
	cout << "TestBool (division test 10.0 / 2) = " << TestBool << endl;

	TestNumber = 70;
	cout << "Decimals value of TestNumber = " << dec << TestNumber << endl;
	cout << "Hex value of TestNumber = " << hex << TestNumber << endl;
	cout << "Oct value of TestNumber = " << oct << TestNumber << endl;

	cout << "#" << hex << 255 << 0 << 10 << endl;

	TestNumber++;
	++TestNumber;

	TestNumber = TestNumber + 1;
	TestNumber += 1;

	cout << dec << "Test number = " << TestNumber << endl;



	_getch();
	return 0;
}
