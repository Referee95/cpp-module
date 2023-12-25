#include"FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name) :ClapTrap(Name)
{
    std::cout << "FragTrap Game started" << std::endl;
    this->health_p = 100;
    this->energy_p = 100;
    this->attack_d = 30;
}
FragTrap::FragTrap(const FragTrap & other): ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called\n" ;
}
FragTrap& FragTrap::operator=(FragTrap const & other){
    std::cout << "Copy FragTrap assignment operator called" << std::endl;
    if(this != &other)
    {
        this->Name = other.Name;
        this->health_p = other.health_p;
        this->energy_p = other.energy_p;
        this->attack_d = other.attack_d;
    }
    return(*this);

}
FragTrap::~FragTrap(){
    std::cout << "FragTrap Game over" << std::endl;
}
void FragTrap::highFivesGuys(void){
    if(this->energy_p > 0 && this->health_p > 0)
        std::cout << "FragTrap a positive high fives request\n";
    else 
        std::cout << "FragTrap no energy points left\n";
}
