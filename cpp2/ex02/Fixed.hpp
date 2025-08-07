/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:40:35 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/07 19:32:22 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int static_point = 8; //quantos bits sao usados para a fraçção
	public:
		Fixed(const int number);
		Fixed(const float number);
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
		Fixed& operator=(const Fixed& other);
		
		bool operator<(const Fixed& other) const;
 		bool operator>(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed& operator++(const Fixed& other);
	
		
		static Fixed& min(Fixed& a, Fixed& b);
		const static Fixed& min(const Fixed& a, const Fixed& b);

		static Fixed& max(Fixed& a, Fixed& b);
		const static Fixed& max(const Fixed& a, const Fixed& b);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		float toFloat( void ) const;
		int toInt( void ) const;
	};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif
