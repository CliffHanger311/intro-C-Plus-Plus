#include "Player.h"

SportsPlayer::SportsPlayer()
{
	_JerseyNumber = "55";
	_Name = "JohnJacobs";
	_Age = 26;
	_Points = 30;
	_Attempts = 60;
}

SportsPlayer::SportsPlayer(string JerseyNumber, string Name, int Age, int Points, int Attempts)
{
	_JerseyNumber = JerseyNumber;
	_Name = Name;
	_Age = Age;
	_Points = Points;
	_Attempts = Attempts;
}

void SportsPlayer::setPlayerData(int i)
{
	switch(i)
		{
			case 1:
				_JerseyNumber = "11";
				_Name = "JamesBrown";
				_Age = 27;
				_Points = 54;
				_Attempts = 85;
				break;
			case 2:
				_JerseyNumber = "23";
				_Name = "JimmyJacobs";
				_Age = 33;
				_Points = 34;
				_Attempts = 78;
				break;
			case 3:
				_JerseyNumber = "06";
				_Name = "PaulRocket";
				_Age = 18;
				_Points = 48;
				_Attempts = 92;
				break;
			case 4:
				_JerseyNumber = "48";
				_Name = "FranktheTank";
				_Age = 29;
				_Points = 30;
				_Attempts = 50;
				break;
			case 5:
				_JerseyNumber = "55";
				_Name = "TheShot";
				_Age = 25;
				_Points = 60;
				_Attempts = 80;
				break;
		}
}

string SportsPlayer::toString(SportsPlayer Temp)
{
	string output;
	
	//Format output here
	output += Temp._JerseyNumber + "\t";
	output += Temp._Name + "\t";
	output += Temp._Age + "\t";
	output += Temp._Points + "\t";
	output += Temp._Attempts;

	return output;
}

//void SportsPlayer::toString()
//{
//	string output;
//
//	//Format output here
//}

double SportsPlayer::SkillLevel(int, int)
{
	//skillLevel method((points/attempts) * 100)
	double SkillLevel = 0;


	return SkillLevel;
}
