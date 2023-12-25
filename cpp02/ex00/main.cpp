/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:16:39 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/16 10:00:18 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
        Fixed a;
        Fixed b( a );
        Fixed c;
        c = b;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
        return 0;
}