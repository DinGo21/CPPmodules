/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:08:13 by disantam          #+#    #+#             */
/*   Updated: 2024/05/13 16:08:15 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define	__HUMANB_H__

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {

public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& weapon);
	void	attack();

private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif