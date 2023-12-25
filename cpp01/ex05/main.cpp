/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:34:04 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/15 12:08:59 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
    (void)av;
    if( ac == 1)
    {
        Harl cmp;

        cmp.complain("DEBUG");
        // cmp.complain("ERROR");
        // cmp.complain("WARNING");
        // cmp.complain("INFO");
        // cmp.complain("WARNONG");   
    }
    return 0;
    

}