// Incorpartion of an Abstract Factory Structure
// C00204076
// Brandon Seah-Dempsey
// Started at 9:30 19 September 2018
// Finished at 
// Time Taken: 
// Known bugs: 

#include <iostream>

/// <summary>
/// 
/// </summary>
class Character
{
public:
	Character()
	{

	}

	virtual ~Character()
	{

	}

	virtual void draw() = 0;
};