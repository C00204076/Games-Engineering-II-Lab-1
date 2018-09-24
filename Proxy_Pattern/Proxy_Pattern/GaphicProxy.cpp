// Implementtion of the Proxy design pattern
// C00204076
// Brandon Seah-Dempsey
// Started at 16:40 22 September 2018
// Finished at
// Time Taken: 
// Known bugs:

#include <iostream>

#include "Graphic.h"
#include "GraphicProxy.h"

using namespace std;

/// <summary>
/// 
/// </summary>
GraphicProxy::GraphicProxy()
{
	this->graphic = 0;
}

/// <summary>
/// 
/// </summary>
GraphicProxy::~GraphicProxy()
{
	if (graphic)
	{
		delete graphic;
	}
}

/// <summary>
/// 
/// </summary>
/// <returns></returns>
Graphic* GraphicProxy::getInstance(void)
{
	if (!graphic)
	{
		graphic = new Graphic();
	}

	return graphic;
}

void GraphicProxy::Draw()
{
	getInstance()->Draw();
}