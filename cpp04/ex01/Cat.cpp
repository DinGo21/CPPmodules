/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:35:38 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 17:48:36 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {

	std::cout << "Cat has been created" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& c) : Animal(c) {

	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*c._brain);
	*this = c;
}

Cat::~Cat() {

	std::cout << this->_type << " has disappeared" << std::endl;
	delete this->_brain;
}

Brain&	Cat::getBrain() const {

	return *this->_brain;
}

void	Cat::makeSound() const {

	std::cout << this->_type << " is saying Meow" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
	
	Animal::operator=(rhs);
	*this->_brain = *rhs._brain;
	return *this;
}
