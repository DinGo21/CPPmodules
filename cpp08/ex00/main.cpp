/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:26:21 by disantam          #+#    #+#             */
/*   Updated: 2024/08/14 15:00:49 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::list<int>		lst;
	
	lst.push_back(1);
	lst.push_back(17);
	lst.push_back(42);

	try
	{
		easyfind(lst, 42);
	}
	catch(const std::exception& e)
	{
		std::cout << "Not found inside the container" << std::endl;
	}

	std::vector<int>	v(5, 10);

	try
	{
		easyfind(v, 11);
	}
	catch(const std::exception& e)
	{
		std::cout << "Not found inside the container" << std::endl;
	}

	return (0);
}