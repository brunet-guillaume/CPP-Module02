/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:01:36 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/12 15:24:21 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

#include <iostream>

Point::Point(): x(0), y(0) {
}

Point::Point(const float x, const float y): x(x), y(y) {
}

Point::Point(const Point &cpy): x(cpy.x), y(cpy.y) {
}

Point::~Point() {
}

Point	&Point::operator=(Point &rhs) {
	return (rhs);
}

Fixed	Point::get_x(void) const{
	return (this->x);
}

Fixed	Point::get_y(void) const{
	return (this->y);
}

std::ostream	&operator<<(std::ostream &o, const Point &obj) {
	o << "(" << obj.get_x() << ", " << obj.get_y() << ")";
	return (o);
}
