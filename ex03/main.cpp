/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:06:38 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 21:29:26 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point A(0.0f, 0.0f);
    Point B(10.0f, 0.0f);
    Point C(5.0f, 10.0f);
    Point inside(5.0f, 5.0f);
	Point outside(15.0f, 15.0f);
	Point onEdge(5.0f, 0.0f);
	Point onVertex(0.0f, 0.0f);


    std::cout << "=== TEST BSP ===" << std::endl;
    std::cout << "Triángulo: A(0,0) B(10,0) C(5,10)" << std::endl;

    std::cout << "Punto (5,5) dentro(1): " << bsp(A, B, C, inside) << std::endl;
    std::cout << "Punto (15,15) fuera(0): " << bsp(A, B, C, outside) << std::endl;
    std::cout << "Punto (5,0) fuera(0): " << bsp(A, B, C, onEdge) << std::endl;
	std::cout << "Punto (0,0) en vértice(0): " << bsp(A, B, C, onVertex) << std::endl;
    return (0);
}