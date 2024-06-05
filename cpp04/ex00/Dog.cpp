/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:54:16 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 17:48:07 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {

	std::cout << "Dog has been created" << std::endl;
}

Dog::Dog(const Dog& d) : Animal(d) {

	std::cout << "Copy constructor called" << std::endl;
}

Dog::~Dog() {

	std::cout << this->_type << " has disappeared" << std::endl;
}

void	Dog::makeSound() const {

	std::cout << this->_type << " is saying Woof Woof" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs) {

	Animal::operator=(rhs);
	return *this;
}
