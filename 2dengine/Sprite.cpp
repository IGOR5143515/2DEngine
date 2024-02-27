#include "Sprite.h"

Sprite::Sprite(std::string str) {

	t.loadFromFile(str);
	s.setTexture(t);

}

sf::Sprite &Sprite::getSprite() { return s; }
