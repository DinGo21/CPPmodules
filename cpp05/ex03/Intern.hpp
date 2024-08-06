/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:57:24 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 16:08:11 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
# define __INTERN_H__

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &i);
	~Intern();

	class InvalidNameException: public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	AForm			*makeForm(std::string name, std::string target);

	const Intern	&operator=(const Intern &rhs);
};

# endif