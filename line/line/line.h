#include <iostream>
#include <conio.h>

using namespace std;

class line
{
private:
	//variables
	int _height;
	int _width;
	
public:
	//Contructors
	line();
	line(int w, int h);

	//Methods
	void setHeight(int h);
	void setWidth(int w);
	string toString();
	
};