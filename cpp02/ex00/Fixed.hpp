/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:16:35 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/18 08:32:15 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixed_p;
    static const int f_bits = 8; 
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits(int const raw);
};

#endif