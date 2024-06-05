/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:27:38 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:29:40 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
#include <string>

class	Weapon {

public:
	Weapon(std::string type);
	~Weapon();

	std::string const&	getType(void) const;
	void				setType(std::string type);

private:
	std::string	_type;
};

#endif