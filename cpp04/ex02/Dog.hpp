/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 11:12:54 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal {

private:
	Brain* _brain;

public:
	Dog();
	Dog(const Dog& d);
	~Dog();

	Brain&			getBrain() const;
	virtual void	makeSound() const;

	Dog&	operator=(const Dog& rhs);
};

#endif