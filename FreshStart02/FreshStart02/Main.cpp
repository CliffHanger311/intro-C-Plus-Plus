#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//declare variables
	int numberone = 5;
	int numbertwo = 6;
	int total = 0;

	//display greeting message
	cout << "Welcome to the static number calculator!\n";

	//show the two numbers that we are adding
	cout << "\tWe are adding 5 and 6 together today.\n\n\n";

	//Calculate
	total = numberone + numbertwo;

	//Display the total
	cout << "The total is ";
	cout << total;
	cout << ".\n\n\n";

	//output goodbye/press and key message
	cout << "Thanks for playing! Press any key to exit!\n\n\n";
	cout << "\t  \x0002\t  \x0002\n";
	cout << "\t \x0002\x0002\t \x0002\x0002\n";
	cout << "\t\x0002\x0002\x0002\t\x0002\x0002\x0002\n";
	cout << "\t  \x0002\t  \x0002\n";
	cout << "\t  \x0002\t  \x0002\n";
	cout << "\t  \x0002\t  \x0002\n";
	cout << "\t  \x0002\t  \x0002\n";
	cout << "\t  \x0002\t  \x0002\n";
	cout << "\t\x0002\x0002\x0002\x0002\x0002\t\x0002\x0002\x0002\x0002\x0002\n";

	getch();
	return 0;
}