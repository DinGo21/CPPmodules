/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:37:21 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:29:59 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack();

private:
	std::string	_name;
	Weapon&		_weapon;
};



#endif