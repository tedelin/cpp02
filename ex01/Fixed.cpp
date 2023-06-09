/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:51:44 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 10:39:55 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed () : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed (const float init) : _value(static_cast<int>(roundf(init * (1 << _fract_bytes)))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed (const int init) : _value(init << _fract_bytes) {
	std::cout << "Int constructor called" << std::endl;
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
	// std::cout << "getRawBits member function  called" << std::endl;
	return (this->_value);
}

int		Fixed::toInt( void ) const {
	return (this->_value >> _fract_bytes);
}

float	Fixed::toFloat( void ) const {
	return static_cast<float>(_value) / (1 << _fract_bytes);
}

std::ostream &	operator<<( std::ostream & o, Fixed const &rhs ) {
	o << rhs.toFloat();
	return (o);
}

Fixed::~Fixed () {
	std::cout << "Destructor called" << std::endl;
	return ;
}