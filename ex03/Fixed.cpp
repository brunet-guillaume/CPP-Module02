/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:40:48 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/12 14:37:24 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &cpy) {
	*this = cpy;
}

Fixed::Fixed(const int int_val) {
	this->setRawBits(int_val << this->partitional_bits);
}

Fixed::Fixed(const float float_val) {
	this->setRawBits(roundf(float_val * (1 << this->partitional_bits)));
}

Fixed::~Fixed() {
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

Fixed	&Fixed::operator=(const Fixed &rhs) {
	if (this == &rhs)
		return (*this);
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj) {
	o << obj.toFloat();
	return (o);
}

bool	Fixed::operator>(const Fixed &rhs) const {
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(const Fixed &rhs) const {
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(const Fixed &rhs) const {
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(const Fixed &rhs) const {
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(const Fixed &rhs) const {
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(const Fixed &rhs) const {
	return (this->toFloat() != rhs.toFloat());
}

float	Fixed::operator+(const Fixed &rhs) const{
	return (this->toFloat() + rhs.toFloat());
}

float	Fixed::operator-(const Fixed &rhs) const{
	return (this->toFloat() - rhs.toFloat());
}

float	Fixed::operator*(const Fixed &rhs) const{
	return (this->toFloat() * rhs.toFloat());
}

float	Fixed::operator/(const Fixed &rhs) const{
	if (rhs.toFloat() == 0) {
		std::cerr << std::endl << "Unable to divide by 0" << std::endl << "0 returned" << std::endl;
		return (0);
	}
	return (this->toFloat() / rhs.toFloat());
}

Fixed	&Fixed::operator++() {
	++fixed;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	old = *this;
	
	++fixed;
	return (old);
}

Fixed	&Fixed::operator--() {
	--fixed;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	old = *this;
	
	--fixed;
	return (old);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}
