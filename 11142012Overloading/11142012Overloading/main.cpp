//#include <iostream>
#include <conio.h>
#include <iomanip>
#include "Box.h"

using namespace std;

int main()
{
	box b;
	//b.setWidth(20);

	box c;
	c.setWidth(13);

	cout << b.toString() << endl;
	cout << c.toString() << endl;

	cout << b << endl;
	cout << c << endl;

	cout << "************************";

	box arrBox[5];
	int arrBoxLength = 5;

	for (int i = 0; i < arrBoxLength; i++)
	{

		arrBox[i] = NULL;

	}

	for (int i = 0; i < arrBoxLength; i++)
	{
		cout << arrBox[i] << endl << endl;
	}
	
	_getch();
	return 0;
}