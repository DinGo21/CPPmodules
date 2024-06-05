/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:11:24 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 18:22:34 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main() {

	int		i;
	int		j;
	AAnimal*	animals[10];
	//AAnimal		error;

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

	return 0;
}