/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:54:27 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 16:04:01 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm::AForm(): _name("Default"), _grade(75), _exec(0), _sign(0)
{
	std::cout << "Default Form constructor called" << std::endl;
}

AForm::AForm(std::string name, int grade, int exec): 
	_name(name), _grade(grade), _exec(exec), _sign(0)
{
	if (this->_grade < 1)
	{
		throw (AForm::GradeTooHighException());
	}
	else if (this->_grade > 150)
	{
		throw (AForm::GradeTooLowException());
	}
	std::cout << "Form " << this->_name << " created" << std::endl;
}

AForm::AForm(const AForm &f): 
	_name(f.getName()), _grade(f.getGrade()), _exec(f.getExec())
{
	*this = f;
	std::cout << "Form copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "Form " << this->_name << " destroyed" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void	AForm::beSigned(const Bureaucrat &bureau)
{
	if (bureau.getGrade() >= this->_grade)
	{
		throw (AForm::GradeTooLowException());
	}
	else
	{
		this->_sign = 1;
	}
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (this->_sign != 1 || this->_exec < executor.getGrade())
	{
		throw(AForm::GradeTooLowException());
	}
	else
	{
		makeExecution(executor);
	}

}

const std::string	&AForm::getName() const
{
	return (this->_name);
}

const int	&AForm::getGrade() const
{
	return (this->_grade);
}

const int	&AForm::getExec() const
{
	return (this->_exec);
}

const bool	&AForm::getSign() const
{
	return (this->_sign);
}

const AForm	&AForm::operator=(const AForm &rhs)
{
	this->_sign = rhs.getSign();
	return (*this);
}

AForm	*AForm::makeForm(const std::string &name, const std::string &target)
{
	AForm	*form = NULL;

	form = ShrubberyCreationForm::makeForm(form, name, target);
	form = RobotomyRequestForm::makeForm(form, name, target);
	form = PresidentialPardonForm::makeForm(form, name, target);
	return (form);
}

std::ostream	&operator<<(std::ostream &o, const AForm &rhs)
{
	std::cout << rhs.getName() << ", Form grade " << rhs.getGrade()
	<< ", Form sign " << rhs.getSign() << '.' << std::endl;
	return o;
}
