/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:37:08 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:27:15 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {

	int		i;
	Zombie*	zombies = new Zombie[N];

	for (i = 0; i < N; i++) {
		zombies[i].setName(name); 
	}
	return zombies;
}