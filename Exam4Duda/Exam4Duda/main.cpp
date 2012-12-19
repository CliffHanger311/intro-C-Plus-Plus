#include <iostream>
#include <conio.h>
#include <iomanip>
#include "Player.h"

using namespace std;

//Array and Const variable for length
const int TeamSize = 5;
//SportsPlayer arrStarters[TeamSize];

SportsPlayer *myTeam = new SportsPlayer[TeamSize];
//Employee *myEmployees = new Employee[numEmployees];

	//Temp.setPlayerData("11", "JamesBrown", 27, 54, 85);
	//Temp.setPlayerData("23", "JimmyJacobs", 33, 34, 78);
	//Temp.setPlayerData("06", "PaulRocket", 18, 48, 92);
	//Temp.setPlayerData("48", "FranktheTank", 29, 30, 50);
	//Temp.setPlayerData("55", "TheShot", 25, 60, 80);
	
//SportsPlayer *ptrPlayer;
//ptrPlayer = &arrStarters[0];

//Function Prototypes
void CreateArray(int);
SportsPlayer SelectData(int);

int main()
{
	SportsPlayer Player;

	cout << "Your Starters are:" << endl << endl;

	CreateArray(TeamSize);

	cout << setw(10) << left << "Player"
		<< setw(10) << left << "Number"
		<< setw(20) << left << "Name"
		<< setw(20) << right << "Age"
		<< setw(10) << right << "Points"
		<< setw(10) << right << "Attempts" << endl;

	for (int i = 0; i < TeamSize; i++)
	{
		cout << "Player " << i << " - ";
		Player = myTeam[i];
		cout << Player.toString(Player) << endl;
	}

	_getch();
	return 0;
}

void CreateArray(int arrSize)
{
	//Temporary variable to hold values
	SportsPlayer Temp;

	//Switch Statement to select new data
	for (int i = 0; i < arrSize; i++)
	{
		Temp.setPlayerData(i);
		myTeam[i] = Temp;
	}	
}