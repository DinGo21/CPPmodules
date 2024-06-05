/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:44:49 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 18:22:09 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("Default") {

	std::cout << "Default Animal has been created" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {

	std::cout << "Animal " << this->_type << " has been created" << std::endl;
}

AAnimal::AAnimal(const AAnimal& a) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = a;
}

AAnimal::~AAnimal() {

	std::cout << "Animal " << this->_type << " has disappeared" << std::endl;
}

std::string AAnimal::getType() const {

	return this->_type;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs) {

	this->_type = rhs.getType();
	return *this;
}
