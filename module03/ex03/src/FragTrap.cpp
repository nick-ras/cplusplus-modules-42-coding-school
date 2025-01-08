#include "ClapTrap.hpp"



FragTrap::FragTrap(std::string inputname) : ClapTrap(inputname) {
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FRAG constructor called for " << name << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FRAG destructor called for " << name << std::endl;
}


FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name)  {
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
    if (this!= &other) {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }
    return *this;
}

//other----------------------------------------------------------------

void highFivesGuys(void){
    std::cout << "High five, high five!" << std::endl;
}

