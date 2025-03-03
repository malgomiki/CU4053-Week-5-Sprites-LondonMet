#include <iostream>

#include "Player.h"

Player::Player()
{
	tomcotTex.loadFromFile("gfx/tomcot1.png");

	setTexture(&tomcotTex);
	setSize(sf::Vector2f(160, 64));
	setPosition(500,100); 
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	velocity.x = 0;
	velocity.y = 0;
	if (input->isKeyDown(sf::Keyboard::W)) {
		velocity = sf::Vector2f(0, -100);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::A)) {
		velocity = sf::Vector2f(-100, 0);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::S)) {
		velocity = sf::Vector2f(0, 100);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::D)) {
		velocity = sf::Vector2f(100, 0);
		move(velocity * dt);
	}

	/*velocity.x = 0;
	velocity.y = 0;

	if (input->isKeyDown(sf::Keyboard::A)) {
		velocity.x = -100.f;
		velocity.y = 0.f;
	}

	if (input->isKeyDown(sf::Keyboard::D)) {
		velocity.x = 100.f;
		velocity.y = 0.f;
	}

	if (input->isKeyDown(sf::Keyboard::S)) {
		velocity.y = 100.f;
		velocity.x = 0.f;
	}

	if (input->isKeyDown(sf::Keyboard::W)) {
		velocity.y = -100.f;
		velocity.x = 0.f;
	}*/

	move(velocity * dt);

}
