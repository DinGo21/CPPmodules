/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:38:23 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:29:44 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {

	return;
}

Weapon::~Weapon() {

	return;
}

std::string const&	Weapon::getType(void) const {

	return this->_type;
}

void	Weapon::setType(std::string type) {

	this->_type = type;
}