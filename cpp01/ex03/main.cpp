/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:29:34 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {
	{
		Weapon	clay = Weapon("Claymore");

		HumanA	eldenJohn("John", clay);
		eldenJohn.attack();
		clay.setType("Baemore");
		eldenJohn.attack();
	}
	{
		Weapon	spear = Weapon("Lance");

		HumanB	gigachad("Gigachad");
		gigachad.setWeapon(spear);
		gigachad.attack();
		spear.setType("Partisan");
		gigachad.attack();
	}
	return 0;
}