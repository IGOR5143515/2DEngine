#include "Engine.h"

void Engine::start(sf::RenderWindow& w) {

	sf::Event event;
	while (w.isOpen()) {

		while (w.pollEvent(event)) {

			if (event.type == sf::Event::Closed)
				w.close();

		}
		
		r.Draw(w);

	}
}
