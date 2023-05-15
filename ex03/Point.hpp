/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:00:57 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/13 19:32:17 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H
#include "Fixed.hpp"


class Point {
	public:
		Point();
		Point(const float x_init, const float y_init);
		Point(const Point& cpy);
		~Point();
		Point&	operator=(const Point& rhs);	

		Fixed	getx( void ) const ;
		Fixed	gety( void ) const ; 
		
	private:
		const Fixed _x;
		const Fixed _y;
};

#endif