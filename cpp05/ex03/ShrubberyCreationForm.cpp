/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:47:31 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 17:30:23 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): 
	AForm("Default", 145, 73), _target("Default")
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
	AForm("ShrubberyCreationForm", 145, 73), _target(target)
{
	std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s): 
	AForm(s), _target(s.getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destroyed" << std::endl;
}

void	ShrubberyCreationForm::makeExecution(const Bureaucrat &executor) const
{
	std::ofstream f;

	(void)executor;
	f.open((this->_target + "_shrubbery").c_str());
	if (!f.is_open())
	{
		std::cout << "Unable to open file";
		return ;
	}
	f << TREE << std::endl;
	f.close();
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

AForm	*ShrubberyCreationForm::makeForm(AForm *form, const std::string &name, 
	const std::string &target)
{
	if (form == NULL && name == "shrubbery creation")
	{
		return (new ShrubberyCreationForm(target));
	}
	return (form);
}

const ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs.getTarget();
	return (*this);
}