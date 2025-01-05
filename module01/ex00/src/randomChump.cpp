#include "Zombie.hpp"
#include <iostream>

void randomChump(const std::string &name) {
	Zombie *zomb = new Zombie(name);
	std::cout << "randomChump created: " << zomb->getName() << std::endl;
    delete zomb;
    zomb = NULL;
    std::cout << "randomChump deleted" << std::endl;
}