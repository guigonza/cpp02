/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:06:19 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 18:19:16 by Guille           ###   ########.fr       */
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