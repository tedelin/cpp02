/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:00:55 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/13 19:31:57 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {
	return ;
}

Point::Point(const float x_init, const float y_init) : _x(x_init), _y(y_init) {
	return ;	
}

Point&	Point::operator=(const Point& rhs) {
	(void) rhs;
	return (*this);
}

Point::Point(const Point& cpy) : _x(cpy.getx()), _y(cpy.gety()) {
	return ;
}

Fixed	Point::getx( void ) const {
	return (this->_x);
}

Fixed	Point::gety( void ) const {
	return (this->_y);
}

Point::~Point() {
	return ;
}