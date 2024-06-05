/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:28:09 by disantam          #+#    #+#             */
/*   Updated: 2024/05/13 12:58:30 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void) {

	return;
}

Zombie::~Zombie(void) {

	std::cout << this->_name << " Has died" << std::endl;
}

void	Zombie::setName(std::string name) {

	this->_name = name;
}

void	Zombie::announce(void) const {

	std::cout << this->_name << ": BraiiiiiinnnzzzZ..." << std::endl;
}
