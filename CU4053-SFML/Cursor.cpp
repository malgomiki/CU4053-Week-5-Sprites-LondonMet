#include "Cursor.h"

Cursor::Cursor()
{
	cursTex.loadFromFile("gfx/icon.png");
	
	setTexture(&cursTex);
	setSize(sf::Vector2f(40, 35));
}

Cursor::~Cursor()
{
}

void Cursor::update(float dt)
{
	setPosition(input->getMouseX(), input->getMouseY());
	
}
