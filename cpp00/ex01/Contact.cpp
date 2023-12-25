/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:20:16 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/05 18:38:54 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void){
    contactindex = 0;
}

Contact::~Contact(void){
}

void    Contact::f_namee(std::string f_name)
{
    this->first_name = f_name;
}
std::string Contact::g_f_name()
{
    return(this->first_name);
}
void    Contact::l_namee(std::string l_name)
{
    this->last_name = l_name;
}
std::string Contact::g_l_name()
{
    return(this->last_name);
}

void    Contact::n_namee(std::string n_name)
{
    this->nickname = n_name;
}
std::string Contact::g_n_name()
{
    return(this->nickname);
}
void    Contact::phone_nbr(std::string phone_n)
{
    this->phone_number = phone_n;
}
std::string Contact::g_p_nbr()
{
    return(this->phone_number);
}

void    Contact::darkest(std::string darkest_s)
{
    this->darkest_secret = darkest_s;
}
std::string Contact::g_d_s()
{
    return(this->darkest_secret);
}
