/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:01:59 by disantam          #+#    #+#             */
/*   Updated: 2024/08/23 15:54:11 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **argv)
{
	int	val;

	for (int i = 0; argv[i] != NULL; i++)
	{
		val = std::atoi(argv[i]);
		if (val < 0)
		{
			throw (PmergeMe::NegativeNumberException());
		}
		this->_lst.push_back(val);
		this->_deq.push_back(val);
	}
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe::~PmergeMe() {}

const char	*PmergeMe::NegativeNumberException::what() const throw()
{
	return ("Error: negative number");
}

void	PmergeMe::showList() const
{
	std::list<int>::const_iterator	it;

	for (it = this->_lst.begin(); it != this->_lst.end(); it++)
	{
		std::cout << *it << ' ';
	}
}

double	PmergeMe::sortList()
{
	clock_t						start, end;
	std::list<int>::iterator	it1, it2, prev;
	int							tmp;

	start = clock();
	for (it1 = ++(this->_lst.begin()); it1 != this->_lst.end(); ++it1)
	{
		tmp = *it1;
		it2 = it1;
		while (it2 != this->_lst.begin())
		{
			prev = it2;
			--prev;
			if (*prev > tmp)
			{
				*it2 = *prev;
				--it2;
			}
			else
				break ;
		}
		*it2 = tmp;
	}
	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000);
}

double	PmergeMe::sortDeque()
{
	clock_t						start, end;
	std::deque<int>::iterator	it1, it2, prev;
	int							tmp;

	start = clock();
	for (it1 = ++(this->_deq.begin()); it1 != this->_deq.end(); ++it1)
	{
		tmp = *it1;
		it2 = it1;
		while (it2 != this->_deq.begin())
		{
			prev = it2;
			--prev;
			if (*prev > tmp)
			{
				*it2 = *prev;
				--it2;
			}
			else
				break ;
		}
		*it2 = tmp;
	}
	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000);
}

const std::deque<int>	&PmergeMe::getDeque() const
{
	return (this->_deq);
}

const std::list<int>	&PmergeMe::getList() const
{
	return (this->_lst);
}

const PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	this->_lst = rhs._lst;
	this->_deq = rhs._deq;
	return (*this);
}
