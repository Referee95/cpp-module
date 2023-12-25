/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:16:35 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/18 13:18:54 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_p;
        static const int f_bits = 8; 
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const float f_point);
        Fixed(const int f_point);
        
        //overloaded
        
        // Comparison operators
        bool    operator>(const Fixed &op);
        bool    operator<(const Fixed &op);
        bool    operator>=(const Fixed &op);
        bool    operator<=(const Fixed &op);
        bool    operator==(const Fixed &op);
        bool    operator!=(const Fixed &op);
        
        // Arithmetic operators
        Fixed& operator=(const Fixed &other);
        Fixed operator+(const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);
        
        // increment/decrement 
        Fixed operator++(int);
        Fixed operator++();
        Fixed operator--(int);
        Fixed operator--();
        
        //overloaded member functions
        Fixed& min(Fixed& a,Fixed& b);
        Fixed& max(Fixed& a,Fixed& b);
        static const Fixed& min(const Fixed& a,const Fixed& b);
        static const Fixed& max(const Fixed& a,const Fixed& b);
        
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif