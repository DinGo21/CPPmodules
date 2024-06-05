/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 18:16:46 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {

private:
	Brain* _brain;

public:
	Dog();
	Dog(const Dog& d);
	virtual ~Dog();

	Brain&			getBrain() const;
	virtual void	makeSound() const;

	Dog&	operator=(const Dog& rhs);
};

#endif