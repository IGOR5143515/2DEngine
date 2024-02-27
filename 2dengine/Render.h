#pragma once
#include"Sprite.h"
#include <SFML/Graphics.hpp>
class Render{
private:
	std::vector<Sprite*>buffer;
public:
	void Draw(sf::RenderWindow &);
	void AddToBuffer(Sprite*);
	void deleteFromBuffer();
};

