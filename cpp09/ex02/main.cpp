/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:30:16 by disantam          #+#    #+#             */
/*   Updated: 2024/08/23 15:45:04 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
	PmergeMe	pme;
	double		time1, time2;

	if (argc == 1)
		return (1);
	try
	{
		pme = PmergeMe(argv + 1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	std::cout << "Before :";
	pme.showList();
	std::cout << std::endl;
	time1 = pme.sortList();
	time2 = pme.sortDeque();
	std::cout << "After: ";
	pme.showList();
	std::cout << std::endl;
	std::cout << "Time to process a range of " << pme.getList().size() <<
				" elements with std::list : " << time1 << std::endl;
	std::cout << "Time to process a range of " << pme.getDeque().size() <<
				" elements with std::deque : " << time2 << std::endl;
	return (0);
}