/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:21:04 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/12 13:48:48 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed r1;
	Fixed r2;
	Fixed r3;

	r1 = (point.getx() - b.getx()) * (point.gety() - c.gety()) - (point.getx() - c.getx()) * (point.gety() - b.gety());
	r2 = (point.getx() - c.getx()) * (point.gety() - a.gety()) - (point.getx() - a.getx()) * (point.gety() - c.gety());
	r3 = (point.getx() - a.getx()) * (point.gety() - b.gety()) - (point.getx() - b.getx()) * (point.gety() - a.gety());

	if ((r1 < 0 && r2 < 0 && r3 < 0) || (r1 >= 0 && r2 >= 0 && r3 >=0))
		return (true);
	return (false);
}