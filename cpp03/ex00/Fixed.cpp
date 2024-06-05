/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:43:41 by disantam          #+#    #+#             */
/*   Updated: 2024/05/16 12:53:10 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fracBits = 8;

Fixed::Fixed() : _rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
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

Fixed& Fixed::operator=(Fixed const& rhs) {

	this->_rawBits = rhs.getRawBits();
	return *this; 
}
