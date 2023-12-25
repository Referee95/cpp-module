/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:56:16 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/07 10:55:19 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(std::string name){
    this->name = name;
    std::cout << this->name << ": i'm a live\n";
}

Zombie::~Zombie(void){
    std::cout << this->name << ": i'm dead\n";
}