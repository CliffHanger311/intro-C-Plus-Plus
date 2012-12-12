#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Rectangle
{
private:
	//Variables
	int _width;
	int _height;

public:
	//Contructors
	Rectangle();
	Rectangle(int, int);

	//Methods
	void setRec(int, int);
	string toString();
	int findArea(Rectangle);
	int findPerimeter(Rectangle);
};