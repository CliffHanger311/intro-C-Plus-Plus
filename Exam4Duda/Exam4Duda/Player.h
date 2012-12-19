/*
	Methods
	Also include a setPlayerData method, a tostring or showPlayer method
	(create a formatted output of data members from the class),
	appropriate getters and setters
*/

#include <string>

using namespace std;

class SportsPlayer
{
private:
	string _JerseyNumber;
	string _Name;
	int _Age;
	int _Points;
	int _Attempts;

public:
	SportsPlayer();
	SportsPlayer(string, string, int, int, int);
	void setPlayerData(int);
	string toString(SportsPlayer);
	void toString();
	double SkillLevel(int, int);

};