/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:56:23 by disantam          #+#    #+#             */
/*   Updated: 2024/08/16 13:53:12 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span	span1(4);

	span1.addNumber(5);
	try
	{
		span1.shortestSpan();
	}
	catch(const std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}
	span1.addNumber(20);
	span1.addNumber(1);
	span1.addNumber(8);
	try
	{
		span1.addNumber(256);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << span1.shortestSpan() << std::endl;
	std::cout << span1.longestSpan() << std::endl;

	Span				span2(10000);
	std::vector<int>	vec(10000, 42);

	span2.addNumbers(vec.begin(), vec.end());
	std::cout << span2.shortestSpan() << std::endl;
	std::cout << span2.longestSpan() << std::endl;
	return (0);
}