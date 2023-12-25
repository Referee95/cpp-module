/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:53:17 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/05 18:46:13 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include"Contact.hpp"


int main(){
    
    PhoneBook cntc;
    std::string str;
    
    std::cout << "Welcome to ykhalil phonebook . We have 3 commands ADD SEARCH & EXIT.\n";
    while(1)
    {
        std::cout << "enter command : ";
        if(!(getline(std::cin, str)))   
            break;
        if(str == "SEARCH")
            cntc.src();
        else if(str == "ADD")
            cntc.add_c();
        else if(str == "EXIT")
            break;
    }
    return 0;
}