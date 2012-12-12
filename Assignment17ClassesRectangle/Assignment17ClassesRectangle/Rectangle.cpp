#include <iostream>
#include <conio.h>
#include "Rectangle.h"

using namespace std;

//Default contructors
Rectangle::Rectangle()
{
	//Default size
	_width = 5;
	_height = 1;
}

Rectangle::Rectangle(int w, int h)
{
	//User specified size
	_width = w;
	_height = h;
}

	void Rectangle::setRec(int h, int w)
	{
		//If statements to check size, limit the size to 50 by 50
		if ((h < 50) && (w < 50))
		{
			_height = h;
			_width = w;
		}
		else
		{
			if (h < 50 && w > 50)
			{
				_height = h;
				_width = 50;
			}
			else if (h > 50 && w < 50)
			{
				_height = 50;
				_width = w;
			}
			else
			{
				_height = 50;
				_width = 50;
			}
		}
	}

	string Rectangle::toString()
	{
		//Output rectangle to user
		string output;
		for (int i = 0; i < _height; i++)
		{
			for (int j = 0; j < _width; j++)
			{
				output = output + "*";

			}
			output = output + "\n";
		}
		return output;
	}

	int Rectangle::findArea(Rectangle)
	{
		//Find Area and return to user
		//height * width
		return _height * _width;
	}

	int Rectangle::findPerimeter(Rectangle)
	{
		//Find the Perimeter and output to the user
		//(height * 2) + (width * 2)
		return (_height * 2) + (_width * 2);
	}