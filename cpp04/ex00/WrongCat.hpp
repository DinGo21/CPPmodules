/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/06/03 14:29:38 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:
	WrongCat();
	WrongCat(const WrongCat& c);
	~WrongCat();

	void	makeSound() const;

	WrongCat&	operator=(const WrongCat& rhs);
};

#endif
