// Incorpartion of an Abstract Factory Structure
// C00204076
// Brandon Seah-Dempsey
// Started at 9:30 19 September 2018
// Finished at 
// Time Taken: 
// Known bugs: 

#include "CharacterFactory.h"
#include <iostream>
#include <vector>

using namespace std;



/// <summary>
/// 
/// </summary>
/// <returns></returns>
int main()
{
	Factory* factory = new CharacterFactory();
	vector<Character*> characters;

	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}

}