#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}


void Harl::debug() const {
    std::cout << "Debug: " << std::endl;
}

void Harl::info( void ) const { 
    std::cout << "Info: " << std::endl;
}

void Harl::warning( void ) const {
    std::cout << "Warning: " << std::endl;
}

void Harl::error( void ) const {
    std::cout << "Error: " << std::endl;
}

void Harl::complain ( str level) {

    void	(Harl::*funcPtr)(void) const = NULL;

	void	(Harl::*arrayPtr[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    str levels_arr[4] = {"debug", "info", "warning", "error"};
    
    int i = 0;
    while (i++ < 4)    {
        if (level == levels_arr[i])
            funcPtr = arrayPtr[i];
    }
    if (!funcPtr)
        std::cout << "Invalid level: " << level << std::endl;
    else
        (this->*funcPtr)();
    
}