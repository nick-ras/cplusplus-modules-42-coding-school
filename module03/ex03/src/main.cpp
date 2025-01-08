#include "ClapTrap.hpp"

int main() {
	
	ScavTrap karl("Karl");
	FragTrap benny("Benny");
	karl.attack("Johnny");
	karl.takeDamage(5);
	karl.beRepaired(1);
	benny.attack("Benny");
	benny.takeDamage(15);



    return 0;
}
