/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:31:41 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/12 12:35:43 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>

int	main(void) {
	Fixed		a;
	const Fixed	b(Fixed(5.05f) * Fixed(2));
	const Fixed	c(Fixed(3.12f) - Fixed(-12));
	Fixed		d(123.321f);

	std::cout << "\e[0;32mFixed a post/pre increment/decrement\e[0m" << std::endl;
	std::cout << std::setw(28) << "a: " << std::setw(16) << a << std::endl;
	std::cout << std::setw(28) << "++a: " << std::setw(16) << ++a << std::endl;
	std::cout << std::setw(28) << "a: " << std::setw(16) << a << std::endl;
	std::cout << std::setw(28) << "a++: " << std::setw(16) << a++ << std::endl;
	std::cout << std::setw(28) << "a: " << std::setw(16) << a << std::endl;
	std::cout << std::setw(28) << "--a: " << std::setw(16) << --a << std::endl;
	std::cout << std::setw(28) << "--a: " << std::setw(16) << --a << std::endl;
	std::cout << std::setw(28) << "a--: " << std::setw(16) << a-- << std::endl;
	std::cout << std::setw(28) << "a: " << std::setw(16) << a << std::endl;

	std::cout << "\e[0;32mconst Fixed b(Fixed(5.05f) * Fixed(2))\e[0m" << std::endl;
	std::cout << std::setw(28) << "b: " << std::setw(16) << b << std::endl;

	std::cout << "\e[0;32mconst Fixed c(Fixed(3.12f) - Fixed(-12))\e[0m" << std::endl;
	std::cout << std::setw(28) << "c: " << std::setw(16) << c << std::endl;
	
	std::cout << "\e[0;32mFixed d(123.321f) post/pre increment/decrement\e[0m" << std::endl;
	std::cout << std::setw(28) << "d: " << std::setw(16) << d << std::endl;
	std::cout << std::setw(28) << "++d: " << std::setw(16) << ++d << std::endl;
	std::cout << std::setw(28) << "d: " << std::setw(16) << d << std::endl;
	std::cout << std::setw(28) << "d++: " << std::setw(16) << d++ << std::endl;
	std::cout << std::setw(28) << "d: " << std::setw(16) << d << std::endl;
	std::cout << std::setw(28) << "--d: " << std::setw(16) << --d << std::endl;
	std::cout << std::setw(28) << "--d: " << std::setw(16) << --d << std::endl;
	std::cout << std::setw(28) << "d--: " << std::setw(16) << d-- << std::endl;
	std::cout << std::setw(28) << "d: " << std::setw(16) << d << std::endl;

	std::cout << "\e[0;32mDivisions\e[0m" << std::endl;
	std::cout << std::setw(28) << "const b / const c: " << std::setw(16) << b / c << std::endl;
	std::cout << std::setw(28) << "a / const b: " << std::setw(16) << a / b << std::endl;
	std::cout << std::setw(28) << "a / d: " << std::setw(16) << a / d << std::endl;
	std::cout << std::setw(28) << "a / Fixed(0): " << std::setw(16) << a / Fixed(0) << std::endl;

	std::cout << "\e[0;32mMultiplications\e[0m" << std::endl;
	std::cout << std::setw(28) << "const b * const c: " << std::setw(16) << b * c << std::endl;
	std::cout << std::setw(28) << "a * const c: " << std::setw(16) << a * c << std::endl;
	std::cout << std::setw(28) << "d * a: " << std::setw(16) << d * a << std::endl;
	std::cout << std::setw(28) << "b * Fixed(0.1f): " << std::setw(16) << b * Fixed(0.1f) << std::endl;

	std::cout << "\e[0;32mAdditions\e[0m" << std::endl;
	std::cout << std::setw(28) << "const b + const c: " << std::setw(16) << b + c << std::endl;
	std::cout << std::setw(28) << "a + const c: " << std::setw(16) << a + c << std::endl;
	std::cout << std::setw(28) << "d + a: " << std::setw(16) << d + a << std::endl;
	std::cout << std::setw(28) << "b + Fixed(0.4f): " << std::setw(16) << b + Fixed(0.5f) << std::endl;

	std::cout << "\e[0;32mSoustractions\e[0m" << std::endl;
	std::cout << std::setw(28) << "const b - const c: " << std::setw(16) << b - c << std::endl;
	std::cout << std::setw(28) << "a - const b: " << std::setw(16) << a - b << std::endl;
	std::cout << std::setw(28) << "a - d: " << std::setw(16) << a - d << std::endl;
	std::cout << std::setw(28) << "a - Fixed(-10): " << std::setw(16) << a - Fixed(-10) << std::endl;

	std::cout << "\e[0;32mComparisons\e[0m" << std::endl;
	std::cout << std::setw(28) << "const b > const c: " << std::setw(16) << (b > c) << std::endl;
	std::cout << std::setw(28) << "const c > const b: " << std::setw(16) << (c > b) << std::endl;
	std::cout << std::setw(28) << "a < const b: " << std::setw(16) << (a < b) << std::endl;
	std::cout << std::setw(28) << "const b < a: " << std::setw(16) << (b < a) << std::endl;
	std::cout << std::setw(28) << "a >= d: " << std::setw(16) << (a >= d) << std::endl;
	std::cout << std::setw(28) << "d >= a: " << std::setw(16) << (d >= a) << std::endl;
	std::cout << std::setw(28) << "a <= Fixed(-10): " << std::setw(16) << (a <= Fixed(-10)) << std::endl;
	std::cout << std::setw(28) << "Fixed(-10) <= a: " << std::setw(16) << (Fixed(-10) <= a) << std::endl;
	std::cout << std::setw(28) << "Fixed(13) <= Fixed(13.0f): " << std::setw(16) << (Fixed(13) <= Fixed(13.0f)) << std::endl;
	std::cout << std::setw(28) << "Fixed(10.0f) == Fixed(10): " << std::setw(16) << (Fixed(10.0f) == Fixed(10)) << std::endl;
	std::cout << std::setw(28) << "Fixed(4) == Fixed(10): " << std::setw(16) << (Fixed(4) == Fixed(10)) << std::endl;
	std::cout << std::setw(28) << "Fixed(10.0f) != Fixed(10): " << std::setw(16) << (Fixed(10.0f) != Fixed(10)) << std::endl;
	std::cout << std::setw(28) << "Fixed(4) != Fixed(10): " << std::setw(16) << (Fixed(4) != Fixed(10)) << std::endl;
	
	std::cout << "\e[0;32mmin/max\e[0m" << std::endl;
	std::cout << std::setw(28) << "min(const b, const c): " << std::setw(16) << Fixed::min(b, c) << std::endl;
	std::cout << std::setw(28) << "min(a, const b): " << std::setw(16) << Fixed::min(a, b) << std::endl;
	std::cout << std::setw(28) << "max(a, d): " << std::setw(16) << Fixed::max(a, d) << std::endl;
	std::cout << std::setw(28) << "max(a, Fixed(-10)): " << std::setw(16) << Fixed::max(a, Fixed(-10)) << std::endl;
	return(0);
}
