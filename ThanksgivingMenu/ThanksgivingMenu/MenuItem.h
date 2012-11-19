#include <iostream>
#include <string>
using namespace std;

class MenuItem
{
private:
	string _Name;
	int _Quantity;
	string _Course;

public:
	MenuItem();
	MenuItem(string, int, string);
	void Add(int);
	void Remove(int);
	int Total();
	string ToString();
	friend ostream& operator << (ostream& output, MenuItem&);

	//MenuItem(int width);
	//MenuItem();
	//friend ostream& operator<<(ostream&, const box&);
};