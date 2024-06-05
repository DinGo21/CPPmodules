/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:20:42 by disantam          #+#    #+#             */
/*   Updated: 2024/05/29 14:16:20 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void) const;

private:
	std::string	const	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
