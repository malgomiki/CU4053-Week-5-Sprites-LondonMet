#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
	tomcotP1.setInput(in);

	en1.setWindow(hwnd);
	enTex1.loadFromFile("gfx/Beach_Ball.png");
	en1.setTexture(&enTex1);
	en1.setSize(sf::Vector2f(100, 100));
	en1.setPosition(200, 250);

	en2.setWindow(hwnd);
	enTex2.loadFromFile("gfx/Goomba.png");
	en2.setTexture(&enTex2);
	en2.setSize(sf::Vector2f(100, 100));
	en2.setPosition(300, 400);

	mousePoint.setInput(in);
	window->setMouseCursorVisible(false);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	tomcotP1.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	en1.update(dt);
	en2.update(dt);

	mousePoint.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(en1);
	window->draw(en2);
	window->draw(testSprite);
	window->draw(tomcotP1);
	window->draw(mousePoint);

	endDraw();
}
