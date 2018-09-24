// Incorpartion of an Abstract Factory Structure
// C00204076
// Brandon Seah-Dempsey
// Started at 9:30 19 September 2018
// Finished at 
// Time Taken: 
// Known bugs: 

#include "Character.h"
#include <iostream>

using namespace std;

/// <summary>
/// 
/// </summary>
class Factory
{
public:
	virtual Character* CreatePlayer() = 0;
	virtual Character* CreateOpponents() = 0;
};