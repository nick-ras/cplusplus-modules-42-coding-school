#include "Zombie.hpp"


int main()
{
	Zombie *Karl = newZombie("KARL");
	Karl->announce();

	delete Karl;
	return (0);
}
