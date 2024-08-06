/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:50:49 by disantam          #+#    #+#             */
/*   Updated: 2024/08/05 13:55:02 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__

# include <iostream>
# include <string>
# include <stdexcept>

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &b);
	~Bureaucrat();

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	void				increaseGrade();
	void				decreaseGrade();
	void				signForm(const Form &form);
	const std::string	&getName() const;
	const int			&getGrade() const;

	const Bureaucrat	&operator=(const Bureaucrat &rhs);
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs);

# endif
