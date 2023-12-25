/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:33:59 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/15 11:11:33 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl(){
};

Harl::~Harl(){
};

void Harl::debug(void)
{
    std::cout << "[DEBUG]\n" << "I love having extra bacon for my 7XL-double-";
    std::cout << "cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info(void)
{
    std::cout << "[INFO]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << "I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error(void)
{
    std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
void Harl::complain( std::string level)
{
    ftoptr all[]  = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string cmp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    for(int i = 0; i < 4; i++)
    {
        if(cmp[i] == level)
        {
            index = i;
            break;
        }
    }
    switch (index)
    {
    case 0:
        (this->*all[0])();
    case 1:
        (this->*all[1])();
    case 2:
        (this->*all[2])();
    case 3:
        (this->*all[3])();
        return;
    }
    std::cout << "[ Probably complaining about insignificant problems ]\n";
}