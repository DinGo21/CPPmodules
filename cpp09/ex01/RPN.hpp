/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:26:38 by disantam          #+#    #+#             */
/*   Updated: 2024/08/23 13:05:41 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_H__
# define __RPN_H__

# include <iostream>
# include <stdexcept>
# include <string>
# include <cstring>
# include <stack>

class RPN
{
private:
	std::string		_input;
	std::stack<int>	_stack;

public:
	RPN();
	RPN(std::string input);
	RPN(const RPN &copy);
	~RPN();

	class SyntaxException: public std::exception
	{
	public:
		const char	*what() const throw();
	};

	void			parseInput();
	void			doCalc();

	const RPN		&operator=(const RPN &rhs);
};

#endif