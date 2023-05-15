/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:51:44 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 10:33:53 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed () : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed (const float init) : _value(static_cast<int>(roundf(init * (1 << _fract_bytes)))) {
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed (const int init) : _value(init << _fract_bytes) {
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed ( const Fixed& other) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed&	Fixed::operator=(const Fixed& other) {
	// std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return (*this);
}

bool	Fixed::operator>(const Fixed& rhs) const {
	return toFloat() > rhs.toFloat();
}

bool	Fixed::operator>=(const Fixed& rhs) const {
	return toFloat() >= rhs.toFloat();
}

bool	Fixed::operator<(const Fixed& rhs) const {
	return toFloat() < rhs.toFloat();
}

bool	Fixed::operator<=(const Fixed& rhs) const {
	return toFloat() < rhs.toFloat();
}

bool	Fixed::operator==(const Fixed& rhs) const {
	return toFloat() == rhs.toFloat();
}

bool	Fixed::operator!=(const Fixed& rhs) const {
	return toFloat() != rhs.toFloat();
}

Fixed	Fixed::operator++() {
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--() {
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	_value += 1;
	return (tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp = *this;
	_value -= 1;
	return (tmp);
}

float	Fixed::operator+(const Fixed& rhs) const {
	return (toFloat() + rhs.toFloat());
}

float	Fixed::operator-(const Fixed& rhs) const {
	return (toFloat() - rhs.toFloat());
}

float	Fixed::operator*(const Fixed& rhs) const {
	return (toFloat() * rhs.toFloat());
}

float	Fixed::operator/(const Fixed& rhs) const {
	return (toFloat() / rhs.toFloat());
}


int		Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function  called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits ( int const raw ) {
	_value = raw;
	return ;
}

int		Fixed::toInt( void ) const {
	return (this->_value >> _fract_bytes);
}

float	Fixed::toFloat( void ) const {
	return static_cast<float>(_value) / (1 << _fract_bytes);
}

const Fixed&	Fixed::min(const Fixed& nb1, const Fixed& nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}
const Fixed&	Fixed::max(const Fixed& nb1, const Fixed& nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
}

Fixed&	Fixed::min(Fixed& nb1, Fixed& nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}

Fixed&	Fixed::max(Fixed& nb1, Fixed& nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
}

std::ostream &	operator<<( std::ostream & o, Fixed const &rhs ) {
	o << rhs.toFloat();
	return (o);
}

Fixed::~Fixed () {
	// std::cout << "Destructor called" << std::endl;
	return ;
}