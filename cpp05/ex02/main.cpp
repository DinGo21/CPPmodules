/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:48:10 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 13:44:08 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				bureau1("Bureau1", 23);
	ShrubberyCreationForm	form1("Joseph");

	form1.beSigned(bureau1);
	bureau1.executeForm(form1);

	std::cout << std::endl;

	Bureaucrat			bureau2("Bureau2", 74);
	RobotomyRequestForm	form2("Carl");

	try
	{
		form2.beSigned(bureau2);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	bureau1.executeForm(form2);

	std::cout << std::endl;

	Bureaucrat				bureau3("Bureau3", 10);
	PresidentialPardonForm	form3("Bob");

	form3.beSigned(bureau3);
	bureau3.executeForm(form3);

	std::cout << std::endl;
}
