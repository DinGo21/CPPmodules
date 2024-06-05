/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:56:47 by disantam          #+#    #+#             */
/*   Updated: 2024/05/08 16:33:31 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string Contact::getFirstName() const {
	return this->_firstName;
}

void	Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}

std::string Contact::getLastName() const {
	return this->_lastName;
}

void	Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}

std::string Contact::getNickname() const {
	return this->_nickname;
}

void	Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
}

std::string Contact::getPhoneNumber() const {
	return this->_phoneNumber;
}

void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

std::string Contact::getSecret() const {
	return this->_secret;
}

void	Contact::setSecret(std::string secret) {
	this->_secret = secret;
}
