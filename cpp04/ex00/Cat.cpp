/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:35:38 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 17:47:46 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {

	std::cout << "Cat has been created" << std::endl;
}

Cat::Cat(const Cat& c) : Animal(c) {

	std::cout << "Copy constructor called" << std::endl;
}

Cat::~Cat() {

	std::cout << this->_type << " has disappeared" << std::endl;
}

void	Cat::makeSound() const {

	std::cout << this->_type << " is saying Meow" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
	
	Animal::operator=(rhs);
	return *this;
}
