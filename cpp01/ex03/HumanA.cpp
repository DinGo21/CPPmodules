/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:14:32 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:30:06 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {

	return;	
}

HumanA::~HumanA() {

	return;
}

void	HumanA::attack() {

	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
