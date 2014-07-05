#pragma once

#include <cstdlib>

#include "GameObjects.h"

class Map
{
public:
	Map();
	void update(string object, float speed);
	void draw(sf::RenderWindow & window, int atMenu);
	
	int configNum;

private:
	GameObjects background;
	GameObjects ground[2];
	GameObjects bottomPipes[2];
	GameObjects topPipes[2];
	int pipePosY;
	int spacing = 160;
	int verticalSpacing = 83;

};