#include "Engine.h"

void Engine::start(sf::RenderWindow& w) {
	sf::Clock clock;
	sf::Event event;
	while (w.isOpen()) {
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;
		while (w.pollEvent(event)) {

			if (event.type == sf::Event::Closed)
				w.close();

			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::D)
					h.isMovingRight = true;
				if (event.key.code == sf::Keyboard::A)
					h.isMovingLeft = true;
				if (event.key.code == sf::Keyboard::W)
					h.isMovingUp = true;
				if (event.key.code == sf::Keyboard::S)
					h.isMovingDown = true;
			}

			if (event.type == sf::Event::KeyReleased) {
				if (event.key.code == sf::Keyboard::D)
					h.isMovingRight = false;
				if (event.key.code == sf::Keyboard::A)
					h.isMovingLeft = false;
				if (event.key.code == sf::Keyboard::W)
					h.isMovingUp = false;

				if (event.key.code == sf::Keyboard::S)
					h.isMovingDown = false;
			}
				
		}

		/*Move*/
		if (h.isMovingRight)
			h.GetSprite().move(h.getSpeed() * time, 0);
		if (h.isMovingLeft)
			h.GetSprite().move(-h.getSpeed() * time,0);
		if (h.isMovingUp)
			h.GetSprite().move(0, -h.getSpeed() * time);
		if (h.isMovingDown)
			h.GetSprite().move(0, h.getSpeed() * time);
		
		r.Draw(w);

	}
}
