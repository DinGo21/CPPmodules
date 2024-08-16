/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:54:12 by disantam          #+#    #+#             */
/*   Updated: 2024/08/09 14:32:20 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void	identify(Base *p)
{
	std::cout << "Type: ";
	if (dynamic_cast<A *>(p) != NULL)
	{
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B *>(p) != NULL)
	{
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C *>(p) != NULL)
	{
		std::cout << "C" << std::endl;
	}
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "Type: A" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "Type: B" << std::endl;
		(void)b;
	}
	catch (std::bad_cast &bc) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "Type: C" << std::endl;
		(void)c;
	}
	catch (std::bad_cast &bc) {}	
}

