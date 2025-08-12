/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:38:22 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/07 14:48:37 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : fixed_point(0){
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other)
		this->fixed_point = other.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return this->fixed_point;
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
	out << value.toFloat();
	return out;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->fixed_point) / (1<< static_point);
}

int Fixed::toInt( void ) const{
	return fixed_point >> static_point;
}

Fixed::Fixed(const float number){
	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(number * (1 << static_point));
}

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called" << std::endl;
	fixed_point = (number << static_point);
}
