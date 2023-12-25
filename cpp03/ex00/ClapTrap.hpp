/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:03:48 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/23 17:56:59 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap( ClapTrap const & other );
		~ClapTrap();
		ClapTrap &		operator=( ClapTrap const & other );
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string Name;
		unsigned int health_p;
		unsigned int energy_p;
		unsigned int attack_d;
};



#endif 