#include "Hero.h"

Hero::Hero():s("C:/Users/IGOR/source/repos/2dengine/2dengine/img/char.png") {

	s.getSprite().setPosition(500, 500);
	speed = 0.5;
	health = 100;
}
