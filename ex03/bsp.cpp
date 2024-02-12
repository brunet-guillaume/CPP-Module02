/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:07:23 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/12 15:58:10 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	w1;
	Fixed	w2;

	// Sebastian Lague: Gamedev Maths : point in triangle
	// https://www.youtube.com/watch?v=HYAgJN3x4GA
	
	w1 = (a.get_x() * (c.get_y() - a.get_y()) + (point.get_y() - a.get_y())
		* (c.get_x() - a.get_x()) - point.get_x() * (c.get_y() - a.get_y()))
		/ ((b.get_y() - a.get_y()) * (c.get_x() - a.get_x())
		- (b.get_x() - a.get_x()) * (c.get_y() - a.get_y()));
	w2 = (point.get_y() - a.get_y() - w1 * (b.get_y() - a.get_y()))
		/ (c.get_y() - a.get_y());
	return (w1 > 0 &&  w2> 0 && (w1 + w2) < 1);
}
