/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:43:19 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/13 11:44:18 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(std::string name){
    setType(name);
};
Weapon:: ~Weapon(){
};

std::string Weapon::getType()
{
    return(this->type);
}

void Weapon::setType(std::string str)
{
    this->type = str;
}
