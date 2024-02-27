#pragma once
#include <SFML/Graphics.hpp>
class Sprite{
private:
	sf::Texture t;
	sf::Sprite s;
public:
	Sprite(std::string str);

	sf::Sprite& getSprite();




};

