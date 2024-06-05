/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:43:41 by disantam          #+#    #+#             */
/*   Updated: 2024/05/17 12:46:12 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static float	mypow(float base, int expo) {
	
	float	result = base;

	while (--expo)
		result *= base; 
	return (result);
}

int const	Fixed::_fracBits = 8;

Fixed::Fixed() : _rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num) : _rawBits(num * mypow(2, Fixed::_fracBits)) {

	std::cout << "Parametric int constructor called" << std::endl;
}

Fixed::Fixed(float const num) : _rawBits(num * mypow(2, Fixed::_fracBits)) {

	std::cout << "Parametric float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& fix) {
	
	std::cout <<"Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::~Fixed() {
	
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw) {

	this->_rawBits = raw;
}

float	Fixed::toFloat() const {

	return ((float)this->_rawBits / (1 << Fixed::_fracBits));
}

int	Fixed::toInt() const {

	return ((float)this->_rawBits / (1 << Fixed::_fracBits));
}

Fixed& Fixed::operator=(Fixed const& rhs) {

	this->_rawBits = rhs.getRawBits();
	return *this; 
}

bool	Fixed::operator>(Fixed const& rhs) const {

	return this->toFloat() > rhs.toFloat();
}

bool	Fixed::operator<(Fixed const& rhs) const {

	return this->toFloat() < rhs.toFloat();
}

bool	Fixed::operator>=(Fixed const& rhs) const {

	return this->toFloat() >= rhs.toFloat();
}

bool	Fixed::operator<=(Fixed const& rhs) const {

	return this->toFloat() <= rhs.toFloat();
}

bool	Fixed::operator==(Fixed const& rhs) const {

	return this->toFloat() == rhs.toFloat();
}

bool	Fixed::operator!=(Fixed const& rhs) const {

	return this->toFloat() != rhs.toFloat();
}

Fixed	Fixed::operator+(Fixed const& rhs) const {

	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const& rhs) const {

	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const& rhs) const {

	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const& rhs) const {

	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed&	Fixed::operator++() {

	this->setRawBits(this->getRawBits() + 1);
	return	*this;
}

Fixed	Fixed::operator++(int num) {

	Fixed	old = *this;

	if (!num) {
		num = 1;
	}
	this->setRawBits(this->getRawBits() + num);
	return old;
}

Fixed&	Fixed::operator--() {

	this->setRawBits(this->getRawBits() - 1);
	return	*this;
}

Fixed	Fixed::operator--(int num) {

	Fixed	old = *this;

	if (!num) {
		num = 1;
	}
	this->setRawBits(this->getRawBits() - num);
	return old;
}

Fixed const&	Fixed::min(Fixed const& lhs, Fixed const& rhs) {

	if (lhs < rhs) {
		return lhs;
	}
	return rhs;
}

Fixed const&	Fixed::max(Fixed const& lhs, Fixed const& rhs) {

	if (lhs > rhs) {
		return lhs;
	}
	return rhs;
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs) {

	o << rhs.toFloat();
	return o;
}
