#include <SFML/Graphics.hpp>
#include"Engine.h"
int main()
{
	sf::RenderWindow w(sf::VideoMode(1280, 720),"Engine");
	Engine e;
	e.start(w);
	
}