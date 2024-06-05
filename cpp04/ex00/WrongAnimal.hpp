/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:25:53 by disantam          #+#    #+#             */
/*   Updated: 2024/06/03 14:29:45 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>
#include <string>

class	WrongAnimal {

protected:
	std::string	_type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& a);
	~WrongAnimal();

	std::string	getType() const;
	void	makeSound() const;

	WrongAnimal&	operator=(const WrongAnimal& rhs);

};

#endif