/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:57:18 by disantam          #+#    #+#             */
/*   Updated: 2024/05/10 16:11:11 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "main.hpp"

int	main() {
	PhoneBook 	newBook;
	std::string	buffer;

	while (1) {
		std::cout << "Enter a command: " << std::endl;
		std::getline(std::cin >> std::ws, buffer);
		if (buffer.compare("ADD") == 0) {
			newBook.add();
		}
		else if (buffer.compare("SEARCH") == 0) {
			newBook.search();
		}
		else if (buffer.compare("EXIT") == 0) {
			break;
		}
		else {
			std::cout << "Available commands: ADD; SEARCH; EXIT." << std::endl;
		} 
	}
	return 0;
}
