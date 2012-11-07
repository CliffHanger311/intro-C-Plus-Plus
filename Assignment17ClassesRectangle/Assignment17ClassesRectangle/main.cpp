#include <iostream>
#include <conio.h>
#include <string>
#include "Rectangle.h"

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

	Rectangle r(width, height);

	cout << r.toString();

	_getch();
	return 0;
}