#ifndef __ScavTrap_HPP__
# define __ScavTrap_HPP__

#include <string>
#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {

    protected:

        void guardgate();

    public:
        ScavTrap(std::string inputname);

        ~ScavTrap();

        ScavTrap(const ScavTrap& other);

        ScavTrap& operator=(const ScavTrap& other);


};


#endif