/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:07:56 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 20:35:34 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(float const a, float const b);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();
		Fixed getX(void) const;
		Fixed getY(void) const;
		
};

#endif