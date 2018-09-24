// Implementtion of the Proxy design pattern
// C00204076
// Brandon Seah-Dempsey
// Started at 16:40 22 September 2018
// Finished at
// Time Taken: 
// Known bugs:

#ifndef IGRAPHIC_H
#define IGRAPHIC_H

#include <iostream>
#include <string>

using namespace std;



// Common Interface
class IGraphic
{
public:
	virtual void Draw() = 0;
};

#endif // !IGRAPHIC_H
