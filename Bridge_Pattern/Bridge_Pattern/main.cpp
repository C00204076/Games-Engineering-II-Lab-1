// Implementation of Bridge design pattern
// C00204076
// Brandon Seah-Dempsey
// Started at 13:36 21 September 2018
// Finished at 
// Time Taken: 
// Known bugs: 

#include "DrawImpl.h"
#include "Character.h"
#include "Player.h"

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main(void)
{
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);

	character->draw();
	
}