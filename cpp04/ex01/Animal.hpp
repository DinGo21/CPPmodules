/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 18:16:57 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include "Brain.hpp"

class	Animal {

protected:
	std::string	_type;

public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& a);
	virtual ~Animal();

	std::string	getType() const;
	virtual Brain&	getBrain() const = 0;
	virtual void	makeSound() const;

	Animal&	operator=(const Animal& rhs);
};

#endif
