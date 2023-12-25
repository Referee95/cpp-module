/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:19:59 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/07/27 15:42:06 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<iostream>
#include <cctype> 
#include <string>
void ft_toupper(std :: string str)
{
    int i = -1;
    
    std::string c;
    while(str[++i])
    {
        c = std::toupper(str[i]);
        std::cout << c ;
    }
    
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac > 1)
    {
        while(av[++i])
            ft_toupper(av[i]);
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}