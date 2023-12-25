/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:18:57 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/11 13:23:11 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
        zombie[i].announce();
    }
    return zombie;
}