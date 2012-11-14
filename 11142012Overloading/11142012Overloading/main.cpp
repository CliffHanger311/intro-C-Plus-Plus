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

	_getch();
	return 0;
}