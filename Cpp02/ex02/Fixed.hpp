/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:47:11 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/17 15:11:32 by mipinhei         ###   ########.fr       */
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
		
		//Comparison operators
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		// Math operations
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		// Incrementation Decrementation
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		//Min Max
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(Fixed const &a, Fixed const &b);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed& other);
#endif