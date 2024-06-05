/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:20:16 by disantam          #+#    #+#             */
/*   Updated: 2024/05/29 14:16:25 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie	zombie1("Manolo");
	Zombie	*zombie2 = newZombie("Antonio");

	zombie1.announce();
	zombie2->announce();
	randomChump("John");
	delete zombie2;
	return 0;
}
