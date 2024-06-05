/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 11:10:10 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include "Brain.hpp"

class	AAnimal {

protected:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& a);

	std::string	_type;

public:
	virtual ~AAnimal();

	std::string		getType() const;
	virtual Brain&	getBrain() const = 0;
	virtual void	makeSound() const = 0;

	AAnimal&	operator=(const AAnimal& rhs);
};

#endif
