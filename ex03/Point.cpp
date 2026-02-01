/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:19:46 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 21:24:39 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float const a, float const b) : x(a), y(b)
{
}
Point::Point(const Point& other) : x(other.x), y(other.y)
{
}
Point& Point::operator=(const Point& other)
{
	(void)other;
	return(*this);
}

Point::~Point()
{
}
Fixed Point::getX(void) const
{
	return(this->x);
}

Fixed Point::getY(void) const
{
	return(this->y);
}