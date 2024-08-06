/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:39:09 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 13:10:16 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): 
	AForm("Default", 72, 45), _target("Default")
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): 
	AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s): 
	AForm(s), _target(s.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destroyed" << std::endl;
}

void	RobotomyRequestForm::makeExecution(const Bureaucrat &executor) const
{
	(void)executor;
	std::cout << "Making some drilling noises..." << std::endl;
	if (rand() % 2 == 0)
	{
		std::cout << this->_target << " has been robotomized" << std::endl;
	}
	else
	{
		std::cout << this->_target << " robotomy failed" << std::endl;
	}
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

const RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs.getTarget();
	return (*this);
}