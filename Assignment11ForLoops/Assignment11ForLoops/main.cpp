#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//Function Prototypes
bool AscendingPattern(int, char);
bool DescendingPattern(int, char);

int main()
{
	//A few space to lower the pattern for better visablility
	cout << endl << endl << endl;

	//For loop for each row
	for (int Counter = 1; Counter < 10; Counter++)
	{
		//The reverse counter for descending pattern
		int ReVerseCount = 10 - Counter;

		//a quick tab to move pattern from edge of window
		cout << "\t";

		//Pairs of versing patterns
		AscendingPattern(Counter, '*');
		DescendingPattern(ReVerseCount, ' ');

		DescendingPattern(ReVerseCount, '*');
		AscendingPattern(Counter, ' ');

		AscendingPattern(Counter, ' ');
		DescendingPattern(ReVerseCount, '*');

		DescendingPattern(ReVerseCount, ' ');
		AscendingPattern(Counter, '*');
		
		//Endl of each row
		cout << endl;
				
	}
	_getch();
	return 0;
}

bool AscendingPattern(int Count, char Symbol)
{
	int i = 0;
	while(i < Count)
	{
		cout << Symbol;
		i++;
	}
	return true;
}

bool DescendingPattern(int Count, char Symbol)
{
	int i = 0;
	while(i < Count)
	{
		cout << Symbol;
		Count--;
	}
	return true;
}
