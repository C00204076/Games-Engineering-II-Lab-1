// Implementation of Handle Class
// C00204076
// Brandon Seah-Dempsey
// Started at 13:36 21 September 2018
// Finished at 
// Time Taken: 
// Known bugs: 

#include "Character.h"

#include <iostream>

using namespace std; 

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character())
	{

	}

	Character* operator->()
	{
		return character;
	} // overloaded ->


private:
	Character * character;
};
