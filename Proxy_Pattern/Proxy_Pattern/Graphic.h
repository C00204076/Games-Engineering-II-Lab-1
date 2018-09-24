// Implementtion of the Proxy design pattern
// C00204076
// Brandon Seah-Dempsey
// Started at 16:40 22 September 2018
// Finished at
// Time Taken: 
// Known bugs:

#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "IGraphic.h"

#include <iostream>
#include <string>

using namespace std;

class Graphic : public IGraphic
{
public:
	Graphic();
	~Graphic();
	void Draw();
};

#endif // !GRAPHIC_H