#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(ScavTrap const &other);
    ScavTrap& operator=(ScavTrap const &other);
    ~ScavTrap();
    void attack(const std::string & target);
    void guardGate();
};

#endif