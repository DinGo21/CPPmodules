/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:16:55 by disantam          #+#    #+#             */
/*   Updated: 2024/08/16 12:59:56 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
# define __SPAN_H__

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <vector>

class Span
{
private:
	unsigned int		_size;
	std::vector<int>	_v;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &s);
	~Span();

	class ExcededLimitException: public std::exception
	{
	public:	
		const char	*what() const throw();
	};

	void		addNumber(int n);
	int			shortestSpan();
	int			longestSpan();

	template<typename T>
	void		addNumbers(T first, T last);

	const Span	&operator=(const Span &rhs);
};

template<typename T>
void	Span::addNumbers(T first, T last)
{
	while (first != last)
	{
		this->addNumber(*first);
		++first;
	}
}

#endif