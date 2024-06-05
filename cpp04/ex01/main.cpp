/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:11:24 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 18:13:53 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void	brainTest2() {

	Cat	basic;

	std::cout << std::endl;

	for (int i = 0; i < 100; i++) {
		basic.getBrain().setIdea("Simple thoughts...", i);
	}

	Cat tmp(basic);

	std::cout << std::endl;

	std::cout << tmp.getBrain().getIdea(0) << std::endl;
	std::cout << tmp.getBrain().getIdea(1) << std::endl;
	std::cout << tmp.getBrain().getIdea(2) << std::endl;

	std::cout << std::endl;
}

void	brainTest() {

	Dog	basic;

	std::cout << std::endl;

	for (int i = 0; i < 100; i++) {
		basic.getBrain().setIdea("Simple thoughts...", i);
	}

	Dog tmp = basic;

	std::cout << std::endl;

	std::cout << tmp.getBrain().getIdea(0) << std::endl;
	std::cout << tmp.getBrain().getIdea(1) << std::endl;
	std::cout << tmp.getBrain().getIdea(2) << std::endl;

	std::cout << std::endl;
}

int	main() {

	int		i;
	int		j;
	Animal*	animals[10];

	for (i = 0; i < 10; i++) {
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 100; j++) {
			if (i % 2 == 0)
				animals[i]->getBrain().setIdea("Cat thoughts...", j);
			else
				animals[i]->getBrain().setIdea("Dog thoughts...", j);
		}
	}
	for (i = 0; i < 10; i++) {
		animals[i]->makeSound();
		for (j = 0; j < 3; j++)
			std::cout << animals[i]->getBrain().getIdea(i) << std::endl;
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (i = 0; i < 10; i++) {
		delete	animals[i];
	}

	std::cout << std::endl;

	brainTest();

	std::cout << std::endl;

	brainTest2();

	return 0;
}