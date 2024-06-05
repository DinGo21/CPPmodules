/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:44:49 by disantam          #+#    #+#             */
/*   Updated: 2024/06/03 14:22:17 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default") {

	std::cout << "Default Animal has been created" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {

	std::cout << "Animal " << this->_type << " has been created" << std::endl;
}

Animal::Animal(const Animal& a) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = a;
}

Animal::~Animal() {

	std::cout << "Animal " << this->_type << " has disappeared" << std::endl;
}

std::string Animal::getType() const {

	return this->_type;
}

void Animal::makeSound() const {

	std::cout << this->_type << " is making an animalistic sound" << std::endl;
}

Animal&	Animal::operator=(const Animal& rhs) {

	this->_type = rhs.getType();
	return *this;
}
