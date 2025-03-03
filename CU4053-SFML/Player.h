#pragma once
#include <iostream>
#include "Framework/GameObject.h"

class Player : public GameObject
{
    sf::Texture tomcotTex;
public:
    Player();
    ~Player();

    void handleInput(float dt) override;
};

