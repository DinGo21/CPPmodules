/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:11:58 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 15:02:11 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
# define __FORM_H__

# include <iostream>
# include <string>
# include <stdexcept>
# include <fstream>

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	const int			_grade;
	const int			_exec;
	bool				_sign;

protected:
	AForm();
	AForm(std::string name, int grade, int exec);
	AForm(const AForm &f);

public:
	virtual ~AForm();

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
	void				execute(const Bureaucrat &executor) const;
	virtual void		makeExecution(const Bureaucrat &executor) const = 0;
	const std::string	&getName() const;
	const int			&getGrade() const;
	const int			&getExec() const;
	const bool			&getSign() const;

	static AForm		*makeForm(const std::string &name, const std::string &target);

	const AForm			&operator=(const AForm &rhs);
};

std::ostream	&operator<<(std::ostream &o, const AForm &rhs);

#endif
