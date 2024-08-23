/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:26:41 by disantam          #+#    #+#             */
/*   Updated: 2024/08/22 17:33:24 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string input): _input(input) {}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN::~RPN() {}

const char	*RPN::SyntaxException::what() const throw()
{
	return ("Error");
}

void	RPN::doCalc()
{
	double	b;
	double	a;
	char	c;

	for (size_t i = 0; i < this->_input.size(); i++)
	{
		c = this->_input[i];
		if (strchr("().", c) || (strchr("+-/*", c) && this->_stack.size() < 2))
		{
			throw (RPN::SyntaxException());
		}
		if (isdigit(c))
		{
			this->_stack.push(c - '0');
		}
		if (strchr("+-/*", c))
		{
			b = this->_stack.top();
			this->_stack.pop();
			a = this->_stack.top();
			this->_stack.pop();
			switch (c)
			{
				case '+':
					this->_stack.push(a + b);
					break ;
				case '-':
					this->_stack.push(a - b);
					break ;
				case '*':
					this->_stack.push(a * b);
					break ;
				case '/':
					this->_stack.push(a / b);
					break ;
			}
		}
	}
	if (this->_stack.size() == 1)
	{
		std::cout << this->_stack.top() << std::endl;
		this->_stack.pop();
	}
}

const	RPN	&RPN::operator=(const RPN &rhs)
{
	this->_stack = rhs._stack;
	this->_input = rhs._input;
	return (*this);
}