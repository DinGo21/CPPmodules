/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:12:55 by disantam          #+#    #+#             */
/*   Updated: 2024/08/23 15:15:46 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_H__
# define __PMERGEME_H__

# include <iostream>
# include <stdexcept>
# include <cstdlib>
# include <ctime>
# include <string>
# include <algorithm>
# include <list>
# include <deque>

class PmergeMe
{
private:

	std::deque<int>	_deq;
	std::list<int>	_lst;

public:
	PmergeMe();
	PmergeMe(char **argv);
	PmergeMe(const PmergeMe &copy);
	~PmergeMe();

	class NegativeNumberException: public std::exception 
	{
	public:
		const char	*what() const throw();
	};
	
	void					showList() const;
	double					sortList();
	double					sortDeque();
	const std::list<int>	&getList() const;
	const std::deque<int>	&getDeque() const;

	const PmergeMe			&operator=(const PmergeMe &rhs);
};

#endif