#include "MenuItem.h"

using namespace std;

MenuItem::MenuItem()
{
	_Name = "";
	_Quantity = 0;
	_Course = "";
}

MenuItem::MenuItem(string Name, int Quantity, string Course)
{
	_Name = Name;
	_Quantity = Quantity;
	_Course = Course;
}

void MenuItem::Add(int count)
{
	_Quantity += count;
}

void MenuItem::Remove(int count)
{
	_Quantity += count; 
	if(_Quantity < 0) _Quantity = 0;
}

int MenuItem::Total()
{
	return _Quantity;
}

string MenuItem::ToString()
{
	string output;
	output += "Name: " + _Name + "\n";
	//output += "Quantity: " + _Quantity + "\n";
	output += "Course: " + _Course + "\n";
	return output;
}

ostream& operator << (ostream& output, MenuItem& item)
{
	output << "Name: " << item._Name << "\n";
	output << "Quantity: " << item._Quantity << "\n";
	output << "Course: " << item._Course << "\n";
	return output;
}