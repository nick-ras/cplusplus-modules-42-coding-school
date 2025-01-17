#include <string>
#include <iostream>
#include "Zombie.hpp"


Zombie::Zombie(const std::string &inputname ) {
	name = inputname;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " destroyed" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << Zombie::name << ": Braiiiiiiinnnssss..." << std::endl;
} #announce function

std::string Zombie::getName() const {
    return name;
}
