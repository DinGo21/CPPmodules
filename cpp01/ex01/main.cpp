/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:30:19 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:27:20 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	int		i;
	Zombie* zombies = zombieHorde(10, "Roberto");

	for (i = 0; i < 10; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return 0;
}
