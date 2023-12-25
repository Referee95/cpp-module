/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:03:43 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/24 14:06:02 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "ClapTrap Game started" << std::endl;
	this->health_p = 10;
	this->energy_p = 10;
	this->attack_d = 0;
	this->Name = Name;
}

ClapTrap::ClapTrap( const ClapTrap & other )
{
	std::cout << "ClapTrap Copy  constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Game over" << std::endl;
}

ClapTrap& ClapTrap::operator=( ClapTrap const & other )
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if ( this != &other )
	{
		this->Name = other.Name;
		this->health_p = other.health_p;
		this->energy_p = other.energy_p;
		this->attack_d = other.attack_d;
	}
	return *this;
}

void ClapTrap::attack(const std::string & target)
{
	if(this->energy_p > 0 && this->health_p > 0)
	{
	std::cout << "ClapTrap " << this->Name << " attacks " << target;
	std::cout << " causing " << this->attack_d << " points of damage!\n";
	this->energy_p--;
	
	std::cout << "energy points remaining : " << this->energy_p << std::endl;
	}
	else
		std::cout << "no energy points left\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->health_p > 0)
	{
		std::cout << "ClapTrap " << this->Name <<  " take " << amount << " of damage" << std::endl;
		if(amount > this->health_p)
			amount = this->health_p;
		this->health_p -= amount;	
	}
	else 
		std::cout << "ClapTrap no energy points left\n";

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy_p > 0 && this->health_p > 0)
	{
	this->health_p += amount;
	std::cout << "recovery health points is " << amount << " now you have " << this->health_p << " health points\n";
	this->energy_p--;
	std::cout << "energy points remaining : " << this->energy_p << std::endl;
	}
	else
		std::cout << "ClapTrap no energy points left\n";
}




