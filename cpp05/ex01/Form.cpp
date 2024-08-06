/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:54:27 by disantam          #+#    #+#             */
/*   Updated: 2024/08/05 13:58:50 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(): _name("Default"), _grade(75), _sign(0)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string name, int grade, bool sign): _name(name), _grade(grade), _sign(sign)
{
	if (this->_grade < 1)
	{
		throw (Form::GradeTooHighException());
	}
	else if (this->_grade > 150)
	{
		throw (Form::GradeTooLowException());
	}
	std::cout << "Form " << this->_name << " created" << std::endl;
}

Form::Form(const Form &f): _name(f.getName()), _grade(f.getGrade())
{
	*this = f;
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " destroyed" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void	Form::beSigned(const Bureaucrat &bureau)
{
	if (bureau.getGrade() <= this->_grade)
	{
		this->_sign = 1;
	}
	else
	{
		throw (Form::GradeTooLowException());
	}
}

const std::string	&Form::getName() const
{
	return (this->_name);
}

const int	&Form::getGrade() const
{
	return (this->_grade);
}

const bool	&Form::getSign() const
{
	return (this->_sign);
}

const Form	&Form::operator=(const Form &rhs)
{
	this->_sign = rhs.getSign();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Form &rhs)
{
	std::cout << rhs.getName() << ", Form grade " << rhs.getGrade()
	<< ", Form sign " << rhs.getSign() << '.' << std::endl;
	return o;
}
