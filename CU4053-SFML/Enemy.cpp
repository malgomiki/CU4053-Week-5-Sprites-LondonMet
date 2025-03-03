#include "Enemy.h"

Enemy::Enemy()
{
	//something's clearly broken here
	enTex1.loadFromFile("gfx/Goomba.png");

	setTexture(&enTex1);
	setSize(sf::Vector2f(100,100));
	setPosition(200, 250);

	enTex2.loadFromFile("gfx/Beach_Ball.png");

	setTexture(&enTex2);
	setSize(sf::Vector2f(100,100));
	setPosition(200, 400);
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
}
