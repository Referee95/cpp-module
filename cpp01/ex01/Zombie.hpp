/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:18:30 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/11 16:45:34 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
#include<string>

class Zombie{
    private:
        std::string name;
    public:
    Zombie();
    ~Zombie();
    
    void announce(void)
    {
        std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
    }
    void setName(std::string nameP);
};
Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );
#endif