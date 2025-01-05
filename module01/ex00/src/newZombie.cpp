#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string name) {
	Zombie *zomb = new Zombie(name);
	std::cout << "New zombie created: " << zomb->getName() << std::endl;
	return zomb;
}