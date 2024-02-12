/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:40:48 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/12 10:24:34 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(const int int_val) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(int_val << this->partitional_bits);
}

Fixed::Fixed(const float float_val) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(float_val * (1 << this->partitional_bits)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	return (this->fixed);
}

void	Fixed::setRawBits(const int raw){
	this->fixed = raw;
}

float	Fixed::toFloat(void) const {
	return (this->getRawBits() / (float)(1 << this->partitional_bits));
}

int	Fixed::toInt(void) const {
	return (this->getRawBits() >> this->partitional_bits);
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj) {
	o << obj.toFloat();
	return (o);
}
