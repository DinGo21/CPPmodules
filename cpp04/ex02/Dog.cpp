/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:54:16 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 17:49:51 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {

	std::cout << "Dog has been created" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& d) : AAnimal(d) {

	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*d._brain);
	*this = d;
}

Dog::~Dog() {

	std::cout << this->_type << " has disappeared" << std::endl;
	delete this->_brain;
}

Brain&	Dog::getBrain() const {

	return *this->_brain;
}

void	Dog::makeSound() const {

	std::cout << this->_type << " is saying Woof Woof" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs) {

	AAnimal::operator=(rhs);
	*this->_brain = *rhs._brain;
	return *this;
}
