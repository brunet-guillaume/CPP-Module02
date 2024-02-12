/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:57:53 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/12 15:24:30 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point {
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &cpy);
		~Point();

		Point		&operator=(Point &rhs);

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
};

std::ostream &operator<<(std::ostream &o, const Point &obj);

#endif
