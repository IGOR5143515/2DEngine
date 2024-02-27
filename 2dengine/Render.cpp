#include "Render.h"

void Render::Draw(sf::RenderWindow& w) {

	for (size_t i = 0; i < buffer.size(); i++)
	{
		w.clear();
		w.draw(buffer[i]->getSprite());
		w.display();
	}

}

void Render::AddToBuffer(Sprite *sp) {

	buffer.push_back(sp);

}