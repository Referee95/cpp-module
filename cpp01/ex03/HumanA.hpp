/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:43:42 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/13 11:26:23 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA(std::string name , Weapon &weapon);
        ~HumanA();
        
        void attack()
        {
            std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;   
        }
        void setWeapon(Weapon name)
        {
            this->weapon = name;
        }
};
#endif