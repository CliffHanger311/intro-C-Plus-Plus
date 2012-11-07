#include <iostream>
#include <conio.h>
#include "line.h"
#include <string>

using namespace std;

int main()
{
	int width;
	int height;
	cout << "please enter a line height: ";
	cin >> height;
	cout << endl << "please enter a line width: ";
	cin >> width;
	cout << endl;
	

	line l;
	//line l(width, height);

	//l.setHeight(height);
	//l.setWidth(width);
	cout << l.toString();



	/*line l;
	l.setWidth(10);
	l.setHeight(1);
	cout << l.toString() << endl;

	line myLine;
	myLine.setHeight(10);
	myLine.setWidth(1);
	cout << myLine.toString() << endl;*/


	_getch();
	return 0;
}