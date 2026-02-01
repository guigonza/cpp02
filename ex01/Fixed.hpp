/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:06:42 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 18:15:45 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int 			fixed;
		static const int bits;
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		void setRawBits( int const raw );
		int getRawBits( void ) const;
		float toFloat(void) const;
		int toInt(void) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif