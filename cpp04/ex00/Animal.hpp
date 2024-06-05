/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/06/03 12:30:47 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class	Animal {

protected:
	std::string	_type;

public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& a);
	virtual ~Animal();

	std::string	getType() const;
	virtual void	makeSound() const;

	Animal&	operator=(const Animal& rhs);
};

#endif
