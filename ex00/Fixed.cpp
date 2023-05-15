/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:51:44 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 10:41:28 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed () : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return (*this);
}

Fixed::Fixed ( const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

void	Fixed::setRawBits ( int const raw ) {
	_value = raw;
	return ;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function  called" << std::endl;
	return (this->_value);
}

Fixed::~Fixed () {
	std::cout << "Destructor called" << std::endl;
	return ;
}