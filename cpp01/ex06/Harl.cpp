/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:09 by disantam          #+#    #+#             */
/*   Updated: 2024/05/14 17:16:41 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level) {

	void	(Harl::*functions[4])(void) const = {
		&Harl::debug,
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	i;
	
	for (i = 0; i < 4; i++) {
		if (level.compare(levels[i]) == 0) {
			break;
		}
	}
	switch (i) {
		case 0:
			(this->*functions[0])();
		case 1:
			(this->*functions[1])();
		case 2:
			(this->*functions[2])();
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << "I am not sure how tired I am today...";
	}
}

void	Harl::debug() const {

	std::cout << "DEBUG:" << std::endl;
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special- \
ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info() const {

	std::cout << "INFO:" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put \
enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning() const {
	
	std::cout << "WARNING:" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for \
years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error() const {

	std::cout << "ERROR:" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
