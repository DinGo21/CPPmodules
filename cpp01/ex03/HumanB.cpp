/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:22:53 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:29:54 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

	return;
}

HumanB::~HumanB() {

	return;
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->_weapon = &weapon;
}

void	HumanB::attack() {

	std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
}
