/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:20:54 by disantam          #+#    #+#             */
/*   Updated: 2024/05/13 13:00:37 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : _name(name) {

	return;
}

Zombie::~Zombie(void) {

	std::cout << this->_name << " Has died" << std::endl;
}

void	Zombie::announce(void) const {

	std::cout << this->_name << ": BraiiiiiinnnzzzZ..." << std::endl;
}
