/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:23:44 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/24 13:59:31 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap exmp("youssef"); 
    exmp.takeDamage(2);
    exmp.attack("khalil"); 
    exmp.beRepaired(5);
    exmp.takeDamage(100);
    exmp.beRepaired(5);
}