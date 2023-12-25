/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:57:34 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/11 17:19:38 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<string>
#include <iostream>

class Zombie{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void )
        {
            std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
        }
    private:
        std::string name;
};
void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif