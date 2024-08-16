/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:31:17 by disantam          #+#    #+#             */
/*   Updated: 2024/08/09 14:31:06 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_H__
# define __BASE_H__

# include <iostream>
# include <cstdlib>
# include <typeinfo>

class Base
{
public:
	virtual ~Base();
};

class A: public Base {};

class B: public Base {};

class C: public Base {};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);

#endif