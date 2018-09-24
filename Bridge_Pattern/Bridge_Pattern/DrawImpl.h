// Implementation of Bridge design pattern
// C00204076
// Brandon Seah-Dempsey
// Started at 13:36 21 September 2018
// Finished at 
// Time Taken: 
// Known bugs: 

#include "DrawAPI.h"

#include <iostream>

using namespace std;

//
class DrawImpl : public DrawAPI
{
public:
	void draw()
	{
		cout << "Draw Impl" << endl;
	}
};