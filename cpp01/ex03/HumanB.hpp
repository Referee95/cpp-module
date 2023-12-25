/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:44:13 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/13 11:26:47 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack()
        {
            std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
        }
        void setWeapon(Weapon& name)
        {
            this->weapon = &name;
        }
        
};
#endif