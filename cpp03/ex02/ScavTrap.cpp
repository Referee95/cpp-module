#include"ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "Game started" << std::endl;
    this->Name = Name;
    this->health_p = 100;
    this->energy_p = 50;
    this->attack_d = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = other;
}
ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "Copy ScavTrap assignment operator called" << std::endl;
    if(this != &other)
    {
        this->Name = other.Name;
        this->health_p = other.health_p;
		this->energy_p = other.energy_p;
		this->attack_d = other.attack_d;
    }
    return(*this);
}

ScavTrap::~ScavTrap(){
    	std::cout << "ScavTrap Game over" << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
    if(this->energy_p > 0 && this->health_p > 0){
        std::cout << "ScavTrap " << this->Name << " attacks " << target;
        std::cout << " causing " << this->attack_d << " points of damage!\n";
        this->energy_p--;
        this->health_p -= this->attack_d;
        std::cout << "energy points remaining : " << this->energy_p << std::endl;
    }
    else 
        std::cout << "ScavTrap no energy points left\n";
}

void ScavTrap::guardGate(){
    if(this->energy_p > 0 && this->health_p > 0)
        std::cout << "ScavTrap is now in Gate keeper mode\n";
        else 
            std::cout << "ScavTrap no energy points left\n";
}