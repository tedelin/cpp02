/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:50:48 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/14 13:54:47 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a = Point(4, 3);
	Point b = Point(6, 8);
	Point c = Point(10, 4);
	Point d = Point(5, 4);
	Point e = Point(3, 6);
	Point f = Point(7, 7);
	Point g = Point(6, 7);

	std::cout << bsp(a, b, c, d) << std::endl;
	std::cout << bsp(a, b, c, g) << std::endl;
	std::cout << bsp(a, b, c, e) << std::endl;
	std::cout << bsp(a, b, c, f) << std::endl;
	std::cout << bsp(a, b, c, a) << std::endl;
	return 0;
}