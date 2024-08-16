/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:11:04 by disantam          #+#    #+#             */
/*   Updated: 2024/08/16 13:45:21 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0)
{
	std::cout << "Empty span created" << std::endl;
}

Span::Span(unsigned int N): _size(N)
{
	std::cout << "Span created" << std::endl;
}

Span::Span(const Span &s)
{
	*this = s;
	std::cout << "Span copy constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destroyed" << std::endl;
}

const char	*Span::ExcededLimitException::what() const throw()
{
	return ("Span limit has been exceded");
}

void	Span::addNumber(int n)
{
	if (this->_v.size() == this->_size)
	{
		throw(Span::ExcededLimitException());
	}
	this->_v.push_back(n);
}

int	Span::shortestSpan()
{
	if (this->_v.size() < 2)
	{
		throw (std::logic_error("Not enough arguments stored"));
	}
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	int result = *(tmp.begin() + 1) - *tmp.begin();
	for (std::vector<int>::iterator it = tmp.begin(); it + 1 != tmp.end(); it++)
	{
		if (*(it + 1) - *it < result)
		{
			result = *(it + 1) - *it;
		}
	}
	return (result);
}

int	Span::longestSpan()
{
	if (this->_v.size() < 2)
	{
		throw (std::logic_error("Not enough arguments stored"));
	}
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

const Span	&Span::operator=(const Span &rhs)
{
	this->_size = rhs._size;
	std::copy(rhs._v.begin(), rhs._v.end(), this->_v.begin());
	return (*this);
}