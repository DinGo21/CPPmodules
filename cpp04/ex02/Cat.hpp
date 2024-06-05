/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/06/04 11:12:42 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal {

private:
	Brain*	_brain;

public:
	Cat();
	Cat(const Cat& c);
	~Cat();

	Brain&			getBrain() const;
	virtual void	makeSound() const;

	Cat&	operator=(const Cat& rhs);
};

#endif
