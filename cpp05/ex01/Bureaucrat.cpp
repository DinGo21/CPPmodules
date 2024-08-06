/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:25:24 by disantam          #+#    #+#             */
/*   Updated: 2024/08/05 12:36:02 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(75)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (this->_grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	else if (this->_grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	std::cout << "Bureaucrat " << this->_name << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	*this = b;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << " destroyed" << std::endl;
}

void	Bureaucrat::increaseGrade()
{
	this->_grade--;
	if (this->_grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
}

void	Bureaucrat::decreaseGrade()
{
	this->_grade++;
	if (this->_grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

void	Bureaucrat::signForm(const Form &form)
{
	if (form.getSign() == 1)
	{
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->_name << " couldn't sign " << form.getName()
			<< " because grade is too low" << std::endl;
	}
}

const std::string	&Bureaucrat::getName() const
{
	return (this->_name);
}

const int	&Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << '.' << std::endl;
	return (o);
}
