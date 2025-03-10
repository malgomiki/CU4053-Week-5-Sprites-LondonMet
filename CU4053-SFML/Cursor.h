#pragma once
#include "Framework/GameObject.h"
class Cursor : public GameObject
{
    sf::Texture cursTex;
public:
    Cursor();
    ~Cursor();

    void update(float dt) override;
};

