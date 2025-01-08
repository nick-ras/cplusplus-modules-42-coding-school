
#ifndef __ClapTrap_HPP__
# define __ClapTrap_HPP__

#include <string>
#include <iostream>

typedef std::string str;

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


class ScavTrap : public ClapTrap {

    protected:

        void guardgate();

    public:
        ScavTrap(std::string inputname);

        ~ScavTrap();

        ScavTrap(const ScavTrap& other);

        ScavTrap& operator=(const ScavTrap& other);


};

class FragTrap : public ClapTrap {

    protected:

        void guardgate();

    public:
        FragTrap(std::string inputname);

        ~FragTrap ();

        FragTrap (const FragTrap& other);

        FragTrap & operator=(const FragTrap& other);


};

class DiamondTrap: public ScavTrap, public FragTrap {

    private:
    //Must be same name as name in ClapTrap
        str name;
    
    protected:
        void guardgate();

    public:
        DiamondTrap(str inputname);

        ~DiamondTrap ();

        DiamondTrap (const DiamondTrap& other);

        DiamondTrap & operator=(const DiamondTrap& other);


};

#endif