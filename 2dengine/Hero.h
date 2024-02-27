#pragma once
#include"Sprite.h"
class Hero
{
private:
	Sprite s;
	float speed;
public:
	int health;
	bool isMovingUp = false;
	bool isMovingDown = false;
	bool isMovingLeft = false;
	bool isMovingRight = false;



public:
	Hero();
	sf::Sprite& GetSprite() { return s.getSprite(); }
	Sprite& getHero() { return s; }
	float getSpeed() { return speed; }
};

