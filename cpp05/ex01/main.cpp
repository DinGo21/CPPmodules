/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:48:10 by disantam          #+#    #+#             */
/*   Updated: 2024/08/05 14:02:33 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureau1("bureau1", 3);
		Form		form1("form1", 2, 0);

		std::cout << bureau1;
		std::cout << form1;
		form1.beSigned(bureau1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureau2("bureau2", 12);
		Form		form2("form2", 25, 0);

		std::cout << bureau2;
		std::cout << form2;
		form2.beSigned(bureau2);
		bureau2.signForm(form2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureau3("bureau3", 20);
		Form		form3("form3", 5, 0);

		std::cout << bureau3;
		std::cout << form3;
		bureau3.signForm(form3);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
