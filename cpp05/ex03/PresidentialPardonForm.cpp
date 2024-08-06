/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:53:06 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 17:30:29 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): 
	AForm("Default", 25, 5), _target("Default")
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): 
	AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s): 
	AForm(s), _target(s.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destroyed" << std::endl;
}

void	PresidentialPardonForm::makeExecution(const Bureaucrat &executor) const
{
	(void)executor;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

AForm	*PresidentialPardonForm::makeForm(AForm *form, const std::string &name, 
	const std::string &target)
{
	if (form == NULL && name == "presidential pardon")
	{
		return (new PresidentialPardonForm(target));
	}
	return (form);
}

const PresidentialPardonForm	&PresidentialPardonForm::operator=(
	const PresidentialPardonForm &rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs.getTarget();
	return (*this);
}
