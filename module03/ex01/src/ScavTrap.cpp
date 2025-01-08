#include "ClapTrap.hpp"
#include "ScavTrap.hpp"



ScavTrap::ScavTrap(std::string inputname) : ClapTrap(inputname) {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "SCAVTRAP constructor called for " << name << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "SCAVTRAP destructor called for " << name << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.name)  {
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    if (this!= &other) {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }
    return *this;
}

//other----------------------------------------------------------------

void ScavTrap::guardgate(){
    std::cout << "in gate keeper mode" << std::endl;
}