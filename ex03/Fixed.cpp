/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:06:19 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 21:28:09 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed()
{
	this->fixed = 0;
}

Fixed::Fixed(const Fixed& other)
{
	this->fixed = other.fixed;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->fixed = other.fixed;
	return (*this);
}
Fixed::Fixed(int const value)
{
	this->fixed= value << this->bits;
}

Fixed::Fixed(float const value)
{
	this->fixed = roundf(value * ( 1 << this->bits));
}
Fixed::~Fixed()
{
}
void Fixed::setRawBits( int const raw )
{
	this->fixed = raw;
}
int Fixed::getRawBits( void ) const
{
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