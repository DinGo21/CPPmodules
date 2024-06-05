/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:28:16 by disantam          #+#    #+#             */
/*   Updated: 2024/05/30 12:28:38 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);

	void		announce(void) const;
	void		setName(std::string name);

private:
	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
