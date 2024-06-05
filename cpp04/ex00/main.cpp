/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:11:24 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 17:52:11 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {

	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << std::endl;

	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	
	std::cout << std::endl;

	const WrongAnimal*	wmeta = new WrongAnimal();
	const WrongAnimal*	wi = new WrongCat();

	std::cout << std::endl;

	wmeta->makeSound();
	wi->makeSound();

	std::cout << std::endl;

	delete wmeta;
	delete wi;

	return 0;
}