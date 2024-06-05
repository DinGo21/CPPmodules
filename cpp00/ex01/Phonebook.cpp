/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:05:50 by disantam          #+#    #+#             */
/*   Updated: 2024/05/28 16:50:03 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook() : _contactIndex(0), _contactNum(0) {
	std::cout << "New Phone Book created" << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << "Phone Book has been deleted" << std::endl;
}

void	PhoneBook::_contactIndexer() {
	this->_contactIndex += 1;
	if (this->_contactIndex > 7) {
		this->_contactIndex = 0;
	}
	if (this->_contactNum < 8) {
		this->_contactNum += 1;
	}
}

void	PhoneBook::add() {
	std::string buff;

	std::cout << "Adding contact..." << std::endl;
	std::cout << "First name: ";
	std::cin >> buff;
	this->_contacts[this->_contactIndex].setFirstName(buff);
	std::cout << "Last name: ";
	std::cin >> buff;
	this->_contacts[this->_contactIndex].setLastName(buff);
	std::cout << "Nickname: ";
	std::cin >> buff;
	this->_contacts[this->_contactIndex].setNickname(buff);
	std::cout << "Phone number: ";
	std::cin >> buff;
	this->_contacts[this->_contactIndex].setPhoneNumber(buff);
	std::cout << "Secret: ";
	std::getline(std::cin >> std::ws, buff);
	this->_contacts[this->_contactIndex].setSecret(buff);
	std::cout << "New contact succesfully added" << std::endl;
	this->_contactIndexer();
}

void	PhoneBook::_listField(std::string field) {
	int	j;

	for (j = 0; j < 9 && field[j] != '\0'; j++) {
		std::cout << field[j];
	}
	if (field[j] != '\0') {
		std::cout << '.';
		j++;
	}
	while (j++ < 10) {
		std::cout << ' ';
	}
}

void	PhoneBook::search() {
	int				i;
	std::string		buffer;

	if (this->_contactNum == 0) {
		std::cout << "No contacts have been added yet" << std::endl;
		return;
	}
	for (i = 0; i < this->_contactNum; i++) {
		std::cout << i + 1 << " | ";
		this->_listField(this->_contacts[i].getFirstName());
		std::cout << " | ";
		this->_listField(this->_contacts[i].getLastName());
		std::cout << " | ";
		this->_listField(this->_contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "Type an index to show a full contact: ";
	std::getline(std::cin >> std::ws, buffer);
	i = buffer[0] - '0';
	if (i < 1 || i > this->_contactNum) {
		std::cout << "Index out of range" << std::endl;
		return;
	}
	i -= 1;
	std::cout << this->_contacts[i].getFirstName() << std::endl;
	std::cout << this->_contacts[i].getLastName() << std::endl;
	std::cout << this->_contacts[i].getNickname() << std::endl;
	std::cout << this->_contacts[i].getPhoneNumber() << std::endl;
	std::cout << this->_contacts[i].getSecret() << std::endl;
}
