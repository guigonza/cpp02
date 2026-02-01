/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:44:40 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 21:03:45 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed sign(Point const p1, Point const p2, Point const p3)
{
	return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed a1 = sign(point, a, b);
	Fixed a2 = sign(point, b, c);
	Fixed a3 = sign(point, c, a);
	bool hasNegatives;
	bool hasPositives;

	if (a1 == 0 || a2 == 0 || a3 == 0)
		return (false);
	hasNegatives = (a1 < 0) || (a2 < 0) || (a3 < 0);
	hasPositives = (a1 > 0) || (a2 > 0) || (a3 > 0);
	return !(hasNegatives && hasPositives);
}