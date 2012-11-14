//#include <iostream>
//#include <string>
//Don't need these two becuase box.h includes it.

#include "Box.h"

using namespace std;

	void box::setWidth(int width)
	{
		_width = width;
	}

	string box::toString()
	{
		string output;

		for (int i = 0; i < _width; i++)
		{
			for (int j = 0; j < _width; j++)
			{
				output = output + "*";
			}//End j loop
			output = output + '\n';
		}//End i loop
		return output;
	}

	box::box()
	{
		_width = 5;
	}

	box::box(int width)
	{
		_width = width;
	}

	ostream& operator<<(ostream &os, const box &b)
	{
		//os << "Hi there";

		for (int i = 0; i < b._width; i++)
		{
			for (int j = 0; j < b._width; j++)
			{
				os << "*";
			}//End j loop
			os << '\n';
		}//End i loop

		return os;
	}