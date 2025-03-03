#pragma once
#include "Framework/GameObject.h"
class Enemy : public GameObject
{
	sf::Texture enTex1;
	sf::Texture enTex2;
public:
	Enemy();
	~Enemy();

	void update(float dt) override;
};

