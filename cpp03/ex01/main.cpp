/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:23:44 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/24 14:06:57 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
    ScavTrap s1("khalil");
    s1.takeDamage(5);
    s1.attack("youssef");
    s1.beRepaired(5);
    s1.guardGate();
}