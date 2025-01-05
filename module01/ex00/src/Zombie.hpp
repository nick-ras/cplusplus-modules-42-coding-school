
#ifndef _Zombie_H__
# define __Zombie_H__

#include <string>

class Zombie {

private:
	std::string name;

public:
    Zombie(std::string const &name);
	void announce( void );
	std::string getName() const;
	~Zombie( void );

};
Zombie *newZombie(std::string name);
void randomChump(const std::string &name);

#endif