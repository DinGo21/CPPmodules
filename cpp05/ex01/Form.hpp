/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:11:58 by disantam          #+#    #+#             */
/*   Updated: 2024/08/05 13:56:42 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
# define __FORM_H__

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_grade;
	bool				_sign;

public:
	Form();
	Form(std::string name, int grade, bool sign);
	Form(const Form &f);
	~Form();

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	void				beSigned(const Bureaucrat &bureau);
	const std::string	&getName() const;
	const int			&getGrade() const;
	const bool			&getSign() const;

	const Form	&operator=(const Form &rhs);
};

std::ostream	&operator<<(std::ostream &o, const Form &rhs);

#endif
