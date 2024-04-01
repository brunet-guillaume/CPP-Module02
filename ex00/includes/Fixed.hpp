/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:31:49 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/12 09:59:28 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int					fixed;
		const static int	partitional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &cpy);
		~Fixed();
		Fixed &operator=(const Fixed &rhs);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
