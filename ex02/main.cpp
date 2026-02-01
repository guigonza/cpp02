/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:06:38 by Guille            #+#    #+#             */
/*   Updated: 2026/02/01 20:00:23 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed x(10);
Fixed y(20);
Fixed z(30);
Fixed const c1(100);
Fixed const c2(50);
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << "x = 10 | y = 20 | z = 30" << std::endl;
std::cout << "Probando suma de x e y: " << x + y << std::endl;
std::cout << "Probando operaciones agregadas de x + y + z: " << x + y + z << std::endl;
std::cout << "Probando operaciones agregadas de x + y - z: " << x + y - z << std::endl;
std::cout << "Probando operaciones agregadas de x * y / z: " << x * y / z << std::endl;
std::cout << "Probando comparación z < y: " << (z < y) << std::endl;
std::cout << "Probando comparación z > y: " << (z > y) << std::endl;
std::cout << "x == x: " << (x == x) << std::endl;
std::cout << "Probando min(x, y): " << Fixed::min(x, y) << std::endl;
std::cout << "min const: " << Fixed::min(c1, c2) << std::endl;
std::cout << "max const: " << Fixed::max(c1, c2) << std::endl;
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}