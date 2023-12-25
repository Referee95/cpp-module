/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:16:33 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/18 15:04:58 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default constrcutor
Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->fixed_p = 0;
}

// parametarized constructor
Fixed::Fixed(const float f_point)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixed_p = roundf(f_point * (1 << f_bits));
}
Fixed::Fixed(const int f_point)
{
    // std::cout << "Int constructor called" << std::endl;
    this->fixed_p = f_point << f_bits;
}

Fixed::Fixed(const Fixed& other){
    // std::cout << "Copy  constructor called" << std::endl;
   *this = other;
}

Fixed& Fixed::operator=(const Fixed& other){
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other){
        this->fixed_p = other.fixed_p;
    }
    return *this;
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return(this->fixed_p);
}
    
void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixed_p = raw;   
}

float Fixed::toFloat( void ) const{
    return static_cast<float>(this->fixed_p) / (1 << f_bits);
}

int Fixed::toInt( void ) const{
    return this->fixed_p >> f_bits;
}

std::ostream& operator<<(std::ostream& ostm, const Fixed& fixed) {
    ostm << fixed.toFloat();
    return ostm;
}
bool    Fixed::operator>(const Fixed &op) {
    return (this->getRawBits() > op.getRawBits());
}

bool    Fixed::operator<(const Fixed &op) {
    return (this->getRawBits() < op.getRawBits());
}

bool    Fixed::operator>=(const Fixed &op) {
    return (this->getRawBits() >= op.getRawBits());
}

bool    Fixed::operator<=(const Fixed &op) {
    return (this->getRawBits() <= op.getRawBits());
}

bool    Fixed::operator==(const Fixed &op) {
    return (this->getRawBits() == op.getRawBits());
}

bool    Fixed::operator!=(const Fixed &op) {
    return (this->getRawBits() != op.getRawBits());
}

Fixed Fixed::operator+(const Fixed &op)
{
    return(this->toFloat() + op.toFloat());
}
Fixed Fixed::operator-(const Fixed &op)
{
    return(this->toFloat() - op.toFloat());
}
Fixed Fixed::operator*(const Fixed &op)
{
    return(this->toFloat() * op.toFloat());
}
Fixed Fixed::operator/(const Fixed &op)
{
    return(this->toFloat() / op.toFloat());
}
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    fixed_p++;
   return tmp;
}
Fixed Fixed::operator++()
{
   this->fixed_p++;
   return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    fixed_p--;
   return tmp;
}
Fixed Fixed::operator--()
{
   this->fixed_p--;
   return *this;
}
Fixed& Fixed::min(Fixed& a,Fixed& b) {
    if(a.fixed_p < b.fixed_p)
        return a;
    return b;
}
const Fixed& Fixed::min(const Fixed& a,const Fixed& b) {
    if(a.fixed_p < b.fixed_p)
        return a;
    return b;
}
Fixed& Fixed::max(Fixed& a,Fixed& b) {
    if(a.fixed_p > b.fixed_p)
        return a;
    return b;
}
const Fixed& Fixed::max(const Fixed& a,const Fixed& b) {
    if(a.fixed_p > b.fixed_p)
        return a;
    return b;
}




