    #include "ClapTrap.hpp"
    

    ClapTrap::ClapTrap(std::string inputname){
        name = inputname;
        hit_points = 10;
        energy_points = 10;
        attack_damage = 0;
        std::cout << "Constructor called for " << name << std::endl;
    };

    ClapTrap::~ClapTrap(){
        std::cout << "Destructor called for " << name << std::endl;
    };

    ClapTrap::ClapTrap(const ClapTrap& other) {
        *this = other;
    };

    ClapTrap& ClapTrap::operator=(const ClapTrap& other){
        if (this!= &other) {
            name = other.name;
            hit_points = other.hit_points;
            energy_points = other.energy_points;
            attack_damage = other.attack_damage;
        }
        return *this;
    }

    void ClapTrap::attack(const std::string& target){
        std::cout << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
        this->energy_points -= 1;
    }

    void ClapTrap::takeDamage(unsigned int amount){
        //Assumed that person is not already dead hitp =0
        std::cout << name << " takes " << amount << " points of damage!" << std::endl;
        this->hit_points -= amount;
        if (this->hit_points <= 0) {
            std::cout << name << " is dead. " << std::endl;
            this->hit_points = 0;
        }
    }

    void ClapTrap::beRepaired(unsigned int amount){
        if (energy_points > 1) {
            std::cout << name << " is being repaired" << std::endl;
            this->hit_points = 10; //repairs to full hit points
            this->energy_points -= amount;
        } else {
            std::cout << name << " has not enough energy to repair!" << std::endl;
        }
    }

	//TODO: Attacking and repairing and cost 1 energy point each
    //TODO: ClapTrap can’t do anything if it has no hit points or energy points left.

    //TODO: memberrunc: ClapTrap <name> attacks <target>, causing <damage> points of damage!