/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:44:49 by disantam          #+#    #+#             */
/*   Updated: 2024/06/03 14:28:26 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {

	std::cout << "WrongAnimal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {

	std::cout << "WrongAnimal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = a;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal " << this->_type << " has disappeared" << std::endl;
}

std::string WrongAnimal::getType() const {

	return this->_type;
}

void WrongAnimal::makeSound() const {

	std::cout << this->_type << " is making an animalistic sound" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs) {

	this->_type = rhs.getType();
	return *this;
}