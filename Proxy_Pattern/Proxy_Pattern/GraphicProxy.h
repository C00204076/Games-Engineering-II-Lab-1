// Implementtion of the Proxy design pattern
// C00204076
// Brandon Seah-Dempsey
// Started at 16:40 22 September 2018
// Finished at
// Time Taken: 
// Known bugs:

#ifndef GRAPHIC_PROXY_H
#define GRAPHIC_PROXY_H

#include "IGraphic.h"
#include "Graphic.h"

#include <iostream>
#include <string>

using namespace std;

class GraphicProxy : public IGraphic
{
public:
	GraphicProxy();
	~GraphicProxy();
	void Draw();

private:
	Graphic * graphic;
	Graphic* getInstance(void);
};

#endif // !GRAPHIC_PROXY_H