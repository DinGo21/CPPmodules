/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:48:10 by disantam          #+#    #+#             */
/*   Updated: 2024/08/02 14:36:06 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bureau1("John", 1);
		std::cout << bureau1;
		bureau1.increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bureau2("Carlos", 150);
		std::cout << bureau2;
		bureau2.decreaseGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bureau3("David", 170);
		std::cout << bureau3;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
