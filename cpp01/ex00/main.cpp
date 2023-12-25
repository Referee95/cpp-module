/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:55:45 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/15 12:17:18 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    Zombie *khalil = newZombie("heap");
    khalil->announce();
    randomChump("stack");
    delete khalil;
    return 0;
}