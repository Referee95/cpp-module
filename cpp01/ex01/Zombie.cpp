/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:19:02 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/11 16:45:04 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(){
    std::cout << " a zombie is alive\n";
}

Zombie::~Zombie(){
    std::cout << this->name << ": i'm dead\n";
}

void Zombie::setName(std::string nameP)
{
    this->name = nameP;
}