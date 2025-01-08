#include "ClapTrap.hpp"

//problem is prob that both base classes inherit again from same baseclass and might hve aeveral instances of it
DiamondTrap::DiamondTrap(str inputname) : ScavTrap(inputname), FragTrap(inputname) {
  this->name = inputname;
  
    std::cout << "DIAMOND constructor called for " << this->name << std::endl;
}