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
	Rectangle(int w, int h);

	//Methods
	void setHeight(int h);
	void setWidth(int w);
	string toString();

};