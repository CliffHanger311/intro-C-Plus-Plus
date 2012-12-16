#include "turkey.h"

//Default contructors
Turkey::Turkey()
{
	//Default size
	_height = 3;
}

Turkey::Turkey(int height)
{
	//User specified size
	_height = height;

}

string Turkey::ToString(int TurkeySize)
{
	string output;
	//Display turkey
			cout << "  .--." << endl
			<< " /} p \\               /}" << endl
			<< "`~)-) /	    	    /` }" << endl
			<< " ( / /            /`}.' }" << endl
			<< "  / /  .-'\"\"'-.  / ' }-'}" << endl
			<< " /  ),'        \\/ '.'}-.}" << endl
			<< "|              `}   .}._}" << endl
			<< "|       .-=-';   } ' }_.}" << endl
			<< "\\      `.-=-;'  } '.}.-}" << endl
			<< " '.      -=-'   ;,}._.}" << endl
			<< "   `-,_  ___ .'` '-._}" << endl;

			//Place legs here, in a for loop
			for (int i = 1; i <= TurkeySize; i++)
			{
				cout << "         |||" << endl;
			}
			cout << "       .=='=," << endl;

	return output;
}