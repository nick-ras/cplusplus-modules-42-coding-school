
#ifndef __ClapTrap_HPP__
# define __ClapTrap_HPP__

#include <string>
#include <iostream>

class ClapTrap {

protected:
    std::string name;
	int hit_points; //health
	int energy_points; // energy to attack or repair
	int attack_damage; //damage given

public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};
#endif