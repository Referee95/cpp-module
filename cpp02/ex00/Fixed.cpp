/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:16:33 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/18 17:21:27 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_p = 0;
}
// Copy constructor

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy  constructor called" << std::endl;
   *this = other;
}

// Copy assignment operator

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other){
        this->fixed_p = other.getRawBits();
    }
    return *this;
}

// Destructor

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixed_p);
}
    
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_p = raw;   
}

