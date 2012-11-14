#include <iostream>
#include <string>
using namespace std;

class box
{
private:
	int _width;

public:
	void setWidth(int);
	string toString();
	box(int width);
	box();
	friend ostream& operator<<(ostream&, const box&);
};