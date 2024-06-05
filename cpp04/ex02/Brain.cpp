/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:35:11 by disantam          #+#    #+#             */
/*   Updated: 2024/06/03 18:10:24 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain& b) {

	std::cout << "Brain copy constructor called" << std::endl;
	*this = b;
}

Brain::~Brain() {

	std::cout << "Brain destroyed" << std::endl;
}

const std::string&	Brain::getIdea(const int in) const {
	
	if (in >= 0 && in < 100)
		return this->_ideas[in];
	return this->_ideas[0];
}

void	Brain::setIdea(const std::string& idea, const int in) {

	if (in >= 0 && in < 100)
		this->_ideas[in] = idea;
}

Brain&	Brain::operator=(const Brain& rhs) {

	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = rhs.getIdea(i);
	}
	return *this;
}
