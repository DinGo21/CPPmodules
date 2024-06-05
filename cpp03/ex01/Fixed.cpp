/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:43:41 by disantam          #+#    #+#             */
/*   Updated: 2024/05/31 11:21:30 by disantam         ###   ########.fr       */
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

	std::cout << "Parametric float constructor" << std::endl;
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

	return (this->_rawBits / (1 << Fixed::_fracBits));
}

Fixed& Fixed::operator=(Fixed const& rhs) {

	this->_rawBits = rhs.getRawBits();
	return *this; 
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs) {

	o << rhs.toFloat();
	return o;
}
