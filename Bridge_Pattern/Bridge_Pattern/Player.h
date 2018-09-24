// Implementation of Bridge design pattern
// C00204076
// Brandon Seah-Dempsey
// Started at 13:36 21 September 2018
// Finished at 
// Time Taken: 
// Known bugs: 

#include "DrawAPI.h"
#include "Character.h"



using namespace std;

//
class Player : public Character
{
public:
	Player(DrawAPI* api)
	{
		this->api = api;
	}

	void draw()
	{
		api->draw();
	}

private:
	DrawAPI * api;
};