/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:35:38 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 17:50:38 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {

	std::cout << "The WrongCat has been created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& c) : WrongAnimal(c) {

	std::cout << "Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << this->_type << "has disappeared" << std::endl;
}

void	WrongCat::makeSound() const {

	std::cout << this->_type << " is saying Meow" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs) {

	WrongAnimal::operator=(rhs);
	return *this;
}
