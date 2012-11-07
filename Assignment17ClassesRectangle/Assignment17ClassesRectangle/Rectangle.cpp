#include <iostream>
#include <conio.h>
#include "Rectangle.h"

using namespace std;

//Default contructors
Rectangle::Rectangle()
{
	_width = 5;
	_height = 1;
}

Rectangle::Rectangle(int w, int h)
{
	_width = w;
	_height = h;
}

	void Rectangle::setHeight(int h)
	{
		if (h < 50)
		{
			_height = h;
		}
		else
		{
			_height = 50;
		}
	}

	void Rectangle::setWidth(int w)
	{
		if (w < 50)
		{
			_width = w;
		}
		else
		{
			_width = 50;
		}
	}

	string Rectangle::toString()
	{
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


