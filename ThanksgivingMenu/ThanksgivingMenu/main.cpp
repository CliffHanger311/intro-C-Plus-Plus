#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "MenuItem.h"

using namespace std;

int main()
{
	MenuItem Turkey("Turkey", 1, "Main");
	Turkey.Add(5);

	MenuItem* TurkeyPointer = &Turkey;

	cout << Turkey.ToString() << endl;

	cout << TurkeyPointer->ToString() << endl;

	MenuItem* arrMenu[5];
	for (int i = 0; i < 5; i++)
	{
		arrMenu[i] = NULL;
	}

	arrMenu[0] = &Turkey;

	for (int i = 0; i < 5; i++)
	{
		if(arrMenu[i] != NULL)
		{
			//arrMenu[i]->ToString();
			cout << *arrMenu[i] << endl;
		}
	}

	_getch();
	return 0;
}