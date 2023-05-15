/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:50:48 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 11:06:21 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "Subject Test" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;

	Fixed test = Fixed(42);
	Fixed test2 = Fixed(21);
	Fixed small = Fixed(2);
	Fixed f_test = Fixed(42.42f);
	Fixed f_test2 = Fixed(5.05f);
	Fixed c_test = Fixed( test );
	Fixed o_test = test;

	std::cout << "Operator overload and copy constructor test" << std::endl;
	std::cout << c_test << std::endl; // 42
	std::cout << o_test << std::endl; // 42
	std::cout << std::endl;
	
	std::cout << "Min/max test" << std::endl;
	std::cout << Fixed::min(test, test2) << std::endl; // 21
	std::cout << Fixed::max(test, test2) << std::endl; // 42
	std::cout << Fixed::max(test, f_test) << std::endl; // 42.4219
	std::cout << std::endl;
	
	std::cout << "Comparison operators" << std::endl;
	std::cout << (test > test2) << std::endl; // True 1
	std::cout << (test < test2) << std::endl; // False 0
	std::cout << (Fixed(42) >= test) << std::endl; // True 1
	std::cout << (Fixed(42) <= test) << std::endl; // True 1
	std::cout << (Fixed(42) == Fixed(42)) << std::endl; // True 1
	std::cout << (Fixed(42) == Fixed(42.42f)) << std::endl; // False 0
	std::cout << (Fixed(42) == Fixed(41)) << std::endl; // False 0
	std::cout << (Fixed(42) != Fixed(41)) << std::endl; // True 1
	std::cout << (Fixed(42) != Fixed(42)) << std::endl; // False 0
	std::cout << std::endl;
	
	std::cout << "Arithmetic operators" << std::endl;
	std::cout << (test + small) << std::endl; // 42 + 2 = 44
	std::cout << (test - small) << std::endl; // 42 - 2 = 40
	std::cout << (test * small) << std::endl; // 42 * 2 = 84
	std::cout << (test / small) << std::endl; // 42 / 2 = 21
	std::cout << std::endl;
	
	std::cout << "Increment/decrements operators" << std::endl;
	std::cout << test << " " << test-- << " " << test << std::endl;
	std::cout << test << " " << --test << " " << test << std::endl;
	std::cout << test << " " << test++ << " " << test << std::endl;
	std::cout << test << " " << ++test << " " << test << std::endl;

	return 0;
}