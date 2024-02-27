#pragma once
#include"Render.h"
#include "Hero.h"
#include <SFML/Graphics.hpp>
class Engine{
private:
	Render r;
	Hero h;
public:
	void start(sf::RenderWindow & w);
	Engine() {
		r.AddToBuffer(&h.getHero());
	}

};

