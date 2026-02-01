/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:06:19 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 19:33:13 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed()
{
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	this->fixed = other.fixed;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed = other.fixed;
	return (*this);
}
Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed= value << this->bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed = roundf(value * ( 1 << this->bits));
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
void Fixed::setRawBits( int const raw )
{
	this->fixed = raw;
}
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}
float Fixed::toFloat(void) const
{
	return((float)this->fixed /(float)( 1 << this->bits));
}
int Fixed::toInt(void) const
{
	return(this->fixed >> this->bits);
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
bool Fixed::operator>(const Fixed& other) const
{
    return (this->fixed > other.fixed);
}
bool Fixed::operator<(const Fixed& other) const
{
    return (this->fixed < other.fixed);
}
bool Fixed::operator>=(const Fixed& other) const
{
    return (this->fixed >= other.fixed);
}
bool Fixed::operator==(const Fixed& other) const
{
    return (this->fixed == other.fixed);
}
bool Fixed::operator<=(const Fixed& other) const
{
    return (this->fixed <= other.fixed);
}
bool Fixed::operator!=(const Fixed& other) const
{
    return (this->fixed != other.fixed);
}
Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}
Fixed& Fixed::operator++()
{
	this->fixed++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixed++;
	return(tmp);
}
Fixed& Fixed::operator--()
{
	this->fixed--;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixed--;
	return(tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}
const Fixed& Fixed::min(const Fixed& a,const Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}
const Fixed& Fixed::max(const Fixed& a,const Fixed&  b)
{
    if (a > b)
        return (a);
    return (b);
}