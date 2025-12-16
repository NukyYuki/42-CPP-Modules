/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-16 14:47:11 by mipinhei          #+#    #+#             */
/*   Updated: 2025-12-16 14:47:11 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
		int _num_val;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &obj);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		Fixed &operator=(const Fixed& other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
};

#endif