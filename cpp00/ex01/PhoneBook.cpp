/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:55:15 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/05 18:46:57 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include "Contact.hpp"


PhoneBook::PhoneBook(void){
    this->index = 0;
    this->count = 0;
}

PhoneBook::~PhoneBook(void){
}

std::string PhoneBook::check(std::string str)
{
    std::string input;
    while(1)
    {
        std::cout << str;
        if(!getline(std::cin , input))
            exit(0);
        if(!input.empty())
            break;
    }
    return(input);
}
void PhoneBook::add_c()
{
    if(this->index > 7)
        this->index = 0;
    std::string input;
    input = check("enter first name    :");
    contacet[index].f_namee(input);
    input = check("enter last name     :");
    contacet[index].l_namee(input);
    input = check("enter nickname      :");
    contacet[index].n_namee(input);
    input = check("enter phone number  :");
    contacet[index].phone_nbr(input);
    input = check("enter darkest_secret:");
    contacet[index].darkest(input);
    this->index++;
    if(this->count < 8)
        this->count++;
}

std::string PhoneBook::format(const std::string& text) 
{
    size_t width = 10;
    if (text.length() > width) 
        return text.substr(0, width - 1) + ".";
    else 
        return text;
}

void PhoneBook::src()
{    
    int i = 0;
    if(this->count > 0)
    {
        std::cout << "The contacts\n";
        while(i < this->count)
        {
            std::cout << std::right << std::setw(10) << i + 1 << "| "
            << std::right << std::setw(10) << format(contacet[i].g_f_name()) << "| "
            << std::right << std::setw(10) << format(contacet[i].g_l_name()) << "| "
            << std::right << std::setw(10) << format(contacet[i].g_n_name()) << std::endl;
            i++;
        }
        int input;
        std::cout << "which index (from 1 to " << this->count << " ) :" ;
        std::cin >> input;
        if (input > this->count || input <= 0 || std::cin.eof())
            exit(0);
        else
        {
            input--;
            std::cout << "first name:     " << contacet[input].g_f_name() << std::endl;
            std::cout << "last name:      " << contacet[input].g_l_name() << std::endl;
            std::cout << "nickname:       " << contacet[input].g_n_name() << std::endl;
            std::cout << "Phone number:   " << contacet[input].g_p_nbr() << std::endl;
            std::cout << "darkest secret: " << contacet[input].g_d_s() << std::endl;
        }
    }
    else
        std::cout << "there's no contact's yet! try to add some\n";
    
}