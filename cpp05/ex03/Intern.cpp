/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:13:11 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 16:12:55 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(const Intern &i)
{
	*this = i;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed" << std::endl;
}

const char	*Intern::InvalidNameException::what() const throw()
{
	return ("Invalid Form name");
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm *form = AForm::makeForm(name, target);

	if (form == NULL)
	{
		throw (Intern::InvalidNameException());
	}
	else
	{
		return (form);
	}
}

const Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}