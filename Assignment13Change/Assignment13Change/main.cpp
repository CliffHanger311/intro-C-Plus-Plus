#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	bool blnContinue = false;
	char C = '0';
	
	do
	{




		cout << "Press any key to continue, 'q' or 'Q' to quit: ";
		cin >> C;
		if (C == 'q'||C == 'Q')
		{
			//Set continue bool to false
			blnContinue = false;
		}else
		{
			//Set continue bool to true
			blnContinue = true;
		}
	}while(blnContinue == true);

	_getch();
	return 0;
}