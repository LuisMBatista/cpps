/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:38:22 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/07 19:28:47 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::static_point;

Fixed::Fixed() : fixed_point(0){
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed::Fixed(const float number){
	fixed_point = roundf(number * (1 << static_point));
}

Fixed::Fixed(const int number) {
	fixed_point = (number << static_point);
}


Fixed::~Fixed(){
}
//Main operators
Fixed& Fixed::operator=(const Fixed& other) {
	if(this != &other)
		this->fixed_point = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
	out << value.toFloat();
	return out;
}
// Comparison operators
bool Fixed::operator<(const Fixed& other) const{
	return this->fixed_point < other.fixed_point;
}

bool Fixed::operator>(const Fixed& other) const{
	return this->fixed_point > other.fixed_point;
}

bool Fixed::operator==(const Fixed& other) const{
	return this->fixed_point == other.fixed_point;
}

bool Fixed::operator!=(const Fixed& other) const{
	return this->fixed_point != other.fixed_point;
}

bool Fixed::operator<=(const Fixed& other) const{
	return this->fixed_point <= other.fixed_point;
}

bool Fixed::operator>=(const Fixed& other) const{
	return this->fixed_point >= other.fixed_point;
}
// Arithmetic operators
Fixed Fixed::operator*(const Fixed& other) const {
	Fixed result;
	long long mult = static_cast<long long>(fixed_point) * other.fixed_point;
	result.fixed_point = static_cast<int>(mult >> static_point);
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed result;
	std::cout << "check"<< std::endl;
	long long div = static_cast<long long>(fixed_point) << static_point;
	result.setRawBits(static_cast<int>(div / other.fixed_point));
	return result;
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;
	std::cout << "check"<< std::endl;
	result.setRawBits(this->fixed_point + other.fixed_point);
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed result;
	std::cout << "check"<< std::endl;
	result.setRawBits(this->fixed_point - other.fixed_point);
	return result;
}

// regular functions
float Fixed::toFloat() const {
	return static_cast<float>(this->fixed_point) / (1<< static_point);
}

int Fixed::toInt( void ) const{
	return fixed_point >> static_point;
}

int Fixed::getRawBits(void) const {
	return this->fixed_point;
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
}


//Min max

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

