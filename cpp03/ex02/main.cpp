/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:53:53 by disantam          #+#    #+#             */
/*   Updated: 2024/05/17 12:45:25 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main() {

	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
