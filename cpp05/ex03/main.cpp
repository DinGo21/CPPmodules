/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:48:10 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 17:34:07 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern		inter1;
		Bureaucrat	bureau1("bureau1", 4);
		AForm		*form1 = inter1.makeForm("presidential pardon", "Bender");

		form1->beSigned(bureau1);
		bureau1.executeForm(*form1);
		delete	form1;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Intern		inter2;
		Bureaucrat	bureau2("bureau2", 73);
		AForm		*form2 = inter2.makeForm("shrubbery creation", "Bender");

		form2->beSigned(bureau2);
		bureau2.executeForm(*form2);
		delete	form2;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Intern		inter3;
		Bureaucrat	bureau3("bureau3", 71);
		AForm		*form3 = inter3.makeForm("robotomy request", "Bender");

		form3->beSigned(bureau3);
		bureau3.executeForm(*form3);
		delete form3;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
